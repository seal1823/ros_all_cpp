import launch 
import launch_ros
from ament_index_python.packages import get_package_share_directory
import os
import launch_ros.parameter_descriptions

def generate_launch_description():
    urdf_package_path = get_package_share_directory("robot_description")
    default_urdf_path = os.path.join(urdf_package_path,"urdf","robot.urdf")
    defalut_rviz_path = os.path.join(urdf_package_path,"config","rviz2_config.rviz")

    action_declare_arg_mode_path = launch.actions.DeclareLaunchArgument(
        name="model",default_value=str(default_urdf_path),description="加载的文件模型路径"
    )

    substitutions_command_result = launch.substitutions.Command(['cat ',launch.substitutions.LaunchConfiguration('model')])  #这里的launch.substitutions.LaunchConfiguration就是用来获取参数'model'里面的内容
    robot_description_value = launch_ros.parameter_descriptions.ParameterValue(substitutions_command_result,value_type=str)  #把得到的内容，包装成ros2的参数值内容

    action_robot_state_publisher = launch_ros.actions.Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{"robot_description":robot_description_value}]
    )

    action_joint_state_publiher = launch_ros.actions.Node(
        package="joint_state_publisher",
        executable="joint_state_publisher"
    )

    action_rviz2 = launch_ros.actions.Node(
        package="rviz2",
        executable="rviz2",
        arguments=['-d',defalut_rviz_path]
    )

    return launch.LaunchDescription([
        action_declare_arg_mode_path,
        action_robot_state_publisher,
        action_joint_state_publiher,
        action_rviz2
    ])