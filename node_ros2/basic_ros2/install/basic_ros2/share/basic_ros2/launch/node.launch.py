import launch
import launch_ros
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    action_cpp_node = launch_ros.actions.Node(
        package="basic_ros2",
        executable="cpp_node"
    )
    return launch.LaunchDescription([
        action_cpp_node
    ])