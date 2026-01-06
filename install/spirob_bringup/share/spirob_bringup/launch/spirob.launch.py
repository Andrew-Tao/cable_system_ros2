from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node
import os
def generate_launch_description():
     
    joy_path = os.path.expanduser(
        "~/ros2_spirob_ws/install/joysticker/lib/joysticker/joysticker_publisher_node"
    )
    load_path = os.path.expanduser(
        "~/ros2_spirob_ws/install/load_cell/lib/load_cell/load_publisher_node"
    )

    fix_joy = ExecuteProcess(
        cmd=["sed", "-i", "1c#!/usr/bin/env python3", joy_path],
        output="screen",
    )

    fix_load = ExecuteProcess(
        cmd=["sed", "-i", "1c#!/usr/bin/env python3", load_path],
        output="screen",
    )


    return LaunchDescription([

        fix_joy,
        fix_load,

        Node(
            package='motor_driver',
            executable='motor_driver_node',
            name='motor_control_subscriber',
            output='screen',
        ),

        Node(
            package='load_cell',
            executable='load_publisher_node',
            name='load_cell',
            output='screen',
        ),

        Node(
            package = 'vision',
            executable = 'record_video_node',
            name = 'video_recorder',
            output = 'screen',
        ),

        Node(
            package='joysticker',
            executable= 'joysticker_publisher_node',
            name = 'joystick_inputs',
            output = 'screen',
        ),
        
        Node(
            package='data_transfer', 
            executable = 'rsync_trigger',
            name = 'rsync_trigger_node',
            output = 'screen',
        )
           
    ])