import os
import launch
import launch.event_handlers
import launch_ros
from ament_index_python.packages import get_package_share_directory 

def generate_launch_description():
    find_package = get_package_share_directory("robot_pose_point")
    yaml_path = os.path.join(find_package,"config","goal_point.yaml")

    initial_pose_node = launch_ros.actions.Node(
        package="robot_pose_point",
        executable="robot_initial_position"
    )

    send_more_point_node = launch_ros.actions.Node(
        package="robot_pose_point",
        executable="robot_send_more_goal_point",
        parameters=[yaml_path],
        name="MorePoint",
        output="screen"
    )

    return launch.LaunchDescription([
        initial_pose_node,
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=initial_pose_node,
                on_exit=[send_more_point_node]
            )
        )
    ])