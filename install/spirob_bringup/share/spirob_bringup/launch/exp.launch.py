from launch import LaunchDescription
from launch.actions import ExecuteProcess, RegisterEventHandler
from launch_ros.actions import Node
from launch.event_handlers import OnProcessExit

def generate_launch_description():
    
    node = Node(
            package='motor_driver',
            executable='motor_publisher_node',
            name='motor_publisher',
            output='screen',
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
        node,
    ])
