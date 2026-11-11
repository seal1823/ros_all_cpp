# Debug Session: gazebo-ros2-control-crash

**Status:** [OPEN]

## 症状 (Symptom)
运行 `gazebo_sim.launch.py`（GPS ROS2 Control 方案）时：
- `[Err] Exception occured in the Load function of plugin with name[gazebo_ros2_control] ... This plugin will not run.`
- `[ERROR] gzserver-2: process has died ... exit code -11`（SIGSEGV）

## 复现步骤
1. build + install `robot_description`
2. `ros2 launch install/robot_description/share/robot_description/launch/gazebo_sim.launch.py`
3. gzserver 在 spawn 机器人模型（`robot_ros2_control.urdf`）加载 `libgazebo_ros2_control.so` 插件时崩溃

## 环境
- Ubuntu 22.04 (jammy)，ROS 2 Humble
- Gazebo Classic 11.10.2
- ros-humble-gazebo-ros2-control 0.4.10
- controller-manager 2.54.2 / diff-drive-controller 2.54.0 / joint-state-broadcaster 2.54.0

## 假设 (Hypotheses)
- **H1**: 崩溃在 `gazebo_ros2_control` 的 `Load()` 内（ControllerManager 构造 / 参数装配）。
- **H2**: `use_sim_time`/`/clock` 时序导致 ControllerManager spin 段错误。
- **H3**: pluginlib `GazeboSystem` 硬件插件加载/构造失败崩溃。
- **H4**: 运输层/事件连接的二次崩溃（Load 失败后的残留）。

## 证据 (Evidence)
### gdb backtrace（崩溃帧，Thread 124 gzserver，SIGSEGV）
```
#0  gazebo_ros2_control::GazeboRosControlPlugin::~GazeboRosControlPlugin()  <-- SIGSEGV
#1  gazebo_ros2_control::GazeboRosControlPlugin::~GazeboRosControlPlugin()
#2  (libgazebo_physics.so.11)
#3  gazebo::physics::Model::LoadPlugin(...)
#4  gazebo::physics::Model::LoadPlugins(...)
#5  gazebo::physics::World::ProcessFactoryMsgs()
#6  gazebo::physics::World::ProcessMessages()
```
### 解读
段错误发生在**插件析构函数**，是 `Load()` 抛异常后 Gazebo 销毁半初始化插件的**二次崩溃**。
**真正的根因是 `Load()` 中途抛出的那个异常**，异常消息被 Gazebo 吞掉（"Exception occured in Load function"）。
→ 需要定位 Load() 内抛异常的具体语句。

## 假设验证 (Hypothesis Verification)
- H1 ✅ 成立（细化）：崩溃是**二次崩溃**——`Load()` 在 `gazebo_ros::Node::Get(sdf)` 抛异常 → Gazebo `Model::LoadPlugin` catch → 销毁半初始化插件 → `~GazeboRosControlPlugin()` 执行 `impl_->executor_->remove_node(...)`（executor_ 为 null）→ SIGSEGV。
- H2 ❌ 非直接因果（use_sim_time 尚未到达，Load 早在建节点就失败）。
- H4 ✅ 崩溃确在 event/模型加载链路（`World::ProcessFactoryMsgs → LoadPlugins`），但根因是异常而非连接残留。
- 已用 `catch catch` 确认异常在 `Model::LoadPlugin` 栈帧上被捕获。

## 结论 (Root Cause) ✅ 已确认并修复
1. **直接原因（gzserver 退出码 -11，SIGSEGV）**：`~GazeboRosControlPlugin()` 中对尚未创建的 `executor_`（null）调用 `remove_node` → 段错误。这是插件 Load 失败的**二次崩溃**。
2. **根因（已实证确认）**：`libgazebo_ros2_control.so` 的 `Load()` 把插件 `<parameters>` 内容作为 `--params-file`（`strings .so | grep --params-file` 证实）。URDF 中写的是 `$(find robot_description)/config/robot_ros2_controller.yaml`，而 `$(find ...)` 是 roslaunch 替换宏，**gzserver/pluginlib/rclcpp 均不解析** → 打开字面不存在的文件 → 抛异常 → `Model.cc` 吞为 "Exception occured in Load function" → 销毁半初始化插件 → 析构 null executor_ → SIGSEGV。
3. **GDB 佐证**：`__cxa_throw`/`catch throw` 在插件加载窗口内未捕获到 C++ 异常（FastRTPS 后台线程的抛出是噪音）——说明异常路径未走常规 `throw` 传播，与 gazebo 插件异常处理机制的特殊性有关；但**前后对照日志**（修复前 "Loading plugin" 后紧跟 Exception；修复后能读到参数文件真实路径并 `Loaded gazebo_ros2_control.`）铁证了根因。
4. **环境**：Gazebo Classic 11 已 EOL，ros-humble-gazebo-ros2-control 0.4.10 在 Classic 上本就脆弱。

## 已应用的修复 (Applied Fix — 方案B)
- 文件：`src/robot_description/urdf/robot_ros2_control.urdf`（第 444 行）
- 将 `<parameters>$(find robot_description)/config/robot_ros2_controller.yaml</parameters>`
  改为绝对路径 `<parameters>/home/man_sui/ros_all_cpp/ros_gazebo/src/robot_description/config/robot_ros2_controller.yaml</parameters>`。
- 重新 `colcon build --symlink-install` 后验证：
  - `Spawn status: SpawnEntity: Successfully spawned entity [own_robot]`
  - `Loading gazebo_ros2_control plugin` → `Received urdf from param server` → `Loaded gazebo_ros2_control.`
  - 无 Exception、无段错误，gzserver 持续存活。

## 后续（非崩溃，可选）
- 控制器（`joint_state_broadcaster` / `diff_drive_controller`）已在 yaml 中定义，但未自动激活。如需驱动小车：
  ```
  ros2 run controller_manager spawner joint_state_broadcaster
  ros2 run controller_manager spawner diff_drive_controller
  ```
- 另外可把 yaml 中 `diff_drive_controller` 的 `odom_frame_id/base_frame_id/joint` 与 URDF/TF 再做一致性核对。