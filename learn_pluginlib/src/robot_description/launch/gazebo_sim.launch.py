import launch 
import launch.event_handlers
import launch.launch_description_sources
import launch_ros
from ament_index_python.packages import get_package_share_directory
import os
import launch_ros.parameter_descriptions

def generate_launch_description():
    urdf_package_path = get_package_share_directory("robot_description")
    default_urdf_path = os.path.join(urdf_package_path,"urdf","robot_ros2_control.urdf")
    defalut_gazebo_path = os.path.join(urdf_package_path,"world","own_world.world")

    action_declare_arg_mode_path = launch.actions.DeclareLaunchArgument(
        name="model",default_value=str(default_urdf_path),description="加载的文件模型路径"
    )

    substitutions_command_result = launch.substitutions.Command(['cat ',launch.substitutions.LaunchConfiguration('model')])  #这里的launch.substitutions.LaunchConfiguration就是用来获取参数'model'里面的内容，Command是执行这个命令后，那输出的内容拿出来
    robot_description_value = launch_ros.parameter_descriptions.ParameterValue(substitutions_command_result,value_type=str)  #把得到的内容，包装成ros2的参数值内容

    action_robot_state_publisher = launch_ros.actions.Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{"robot_description":robot_description_value,"use_sim_time":True}]
    )

    action_gazebo_launch = launch.actions.IncludeLaunchDescription(
        launch.launch_description_sources.PythonLaunchDescriptionSource(
            [get_package_share_directory("gazebo_ros"),"/launch","/gazebo.launch.py"]
        ),
        launch_arguments=[("world",defalut_gazebo_path),("verbose","true")]
    )

    action_robot_gazebo_node = launch_ros.actions.Node(
        package="gazebo_ros",
        executable="spawn_entity.py",
        arguments=["-topic","/robot_description","-entity","own_robot"]
    )

    action_load_joint_state_controller = launch.actions.ExecuteProcess(   #让launch执行一个“终端命令/外部进程”
        cmd='ros2 control load_controller joint_state_broadcaster --set-state active'.split(' '),
        output='screen'
    )

    action_load_diff_controller = launch.actions.ExecuteProcess(
        cmd='ros2 control load_controller diff_drive_controller --set-state active'.split(' '),
        output='screen'
    )

    return launch.LaunchDescription([
        action_declare_arg_mode_path,
        action_robot_state_publisher,
        action_gazebo_launch,
        action_robot_gazebo_node,
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=action_robot_gazebo_node,
                on_exit=[action_load_joint_state_controller]
            )
        ),
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=action_load_joint_state_controller,
                on_exit=[action_load_diff_controller]
            )
        )
    ])