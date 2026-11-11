import launch 
import launch_ros
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    action_sub = launch_ros.actions.Node(
        package="create_own_msg",
        executable="use_own_msg_sub"
    )

    action_topic = launch_ros.actions.Node(
        package="create_own_msg",
        executable="use_own_msg_topic"
    )

    return launch.LaunchDescription([
        action_sub,
        action_topic
    ])