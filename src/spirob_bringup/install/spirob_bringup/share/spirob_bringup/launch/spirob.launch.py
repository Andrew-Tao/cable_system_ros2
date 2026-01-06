from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        
        Node(
            package='motor_driver',
            executable='motor_driver_node',
            name='smotor_driver',
            output='screen',
        ),

        Node(
            package='load_cell',
            executable='load_publisher_node',
            name='load_cell',
            output='screen',
        ),

        Node(
            package = 'Vision',
            executable = 'video_recorder_node',
            name = 'video_recorder',
            output = 'screen',
        ),
        
    ])