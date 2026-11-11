import os
import launch
import launch_ros
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    find_packages_own_nav2 = get_package_share_directory("robot_navigation2")
    nav2_packages = get_package_share_directory("nav2_bringup")
    rviz2_road = os.path.join(nav2_packages,"rviz","nav2_default_view.rviz")

    use_sim_time = launch.substitutions.LaunchConfiguration("use_sim_time",default='true')
    map_yaml_path = launch.substitutions.LaunchConfiguration("map",default=os.path.join(find_packages_own_nav2,"maps","room.yaml"))
    nav2_params_path = launch.substitutions.LaunchConfiguration("param",default=os.path.join(find_packages_own_nav2,"config","nav2_params.yaml"))

    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument("use_sim_time",default_value=use_sim_time,description="是否使用仿真时间"),
        launch.actions.DeclareLaunchArgument("map",default_value=map_yaml_path,description="栅格图yaml文件路径"),
        launch.actions.DeclareLaunchArgument("param",default_value=nav2_params_path,description="导航配置文件路径"),

        launch.actions.IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                [nav2_packages,"/launch","/bringup_launch.py"]
            ),
            launch_arguments={
                'map':map_yaml_path,
                "use_sim_time":use_sim_time,
                "params_file":nav2_params_path
            }.items()
        ),
        launch_ros.actions.Node(
            package="rviz2",
            executable="rviz2",
            arguments=['-d',rviz2_road],
            parameters=[{"use_sim_time":use_sim_time}],
            output="screen"
        ) 
    ])  