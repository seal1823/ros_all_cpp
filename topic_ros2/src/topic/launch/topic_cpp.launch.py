import launch
import launch_ros
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    turtlesim_node_r_value = launch.actions.DeclareLaunchArgument(
        name = "background_r" , default_value= "255" , description= "设置背景红颜色"
    )

    turtlesim_node_g_value = launch.actions.DeclareLaunchArgument(
        name = "background_g" , default_value= "255" , description= "设置背景绿颜色"
    )

    turtlesim_node_b_value = launch.actions.DeclareLaunchArgument(
        name = "background_b" , default_value= "255" , description= "设置背景蓝颜色"
    )

    topic_cpp_node = launch_ros.actions.Node(
        package="topic",
        executable="cpp_topic"
    )

    turtlesim_node = launch_ros.actions.Node(
        package="turtlesim",
        executable="turtlesim_node",
        parameters=[{"background_r":launch.substitutions.LaunchConfiguration("background_r")},
                    {"background_b":launch.substitutions.LaunchConfiguration("background_b")},
                    {"background_g":launch.substitutions.LaunchConfiguration("background_g")}
        ]
    )

    return launch.LaunchDescription([
        turtlesim_node_r_value,
        turtlesim_node_g_value,
        turtlesim_node_b_value,
        turtlesim_node,
        topic_cpp_node,
    ])