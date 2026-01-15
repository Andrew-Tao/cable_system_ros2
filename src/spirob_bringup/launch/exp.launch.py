from launch import LaunchDescription
from launch.actions import ExecuteProcess, RegisterEventHandler
from launch_ros.actions import Node
from launch.event_handlers import OnProcessExit
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    duration = LaunchConfiguration("duration")
    
    node = Node(
            package='motor_driver',
            executable='motor_publisher_node',
            name='motor_publisher',
            output='screen',
            parameters=[{
                "duration": duration,
               }]
            

        )
    """
    post_cmd = RegisterEventHandler(
        OnProcessExit(
            target_action=node,
            on_exit=[
                ExecuteProcess(
                    cmd=['bash', '-c', 
                        '''
                        ros2 bag record -o {self.exp_name} /joystick_inputs /motor_status /load_data --duration {self.duration}
                        '''],
                    output='screen'
                )
            ]
        )
    )
    """
    
    return LaunchDescription([
        DeclareLaunchArgument(
            "duration",
            default_value="5.0",
            description="Duration of Experiment"
        ),

        node,
    ])
