#!/usr/bin/env python3
import socket
from rclpy.node import Node
import rclpy
import os
import json
from rclpy.parameter import Parameter

class FileRsyncNode(Node):

    def __init__(self):

        super().__init__('rsync_trigger_node')

        self.declare_parameter("rsync_flag", False) # flag is true when each experiment ends, set by experiment.py


        self.out_path = os.path.expanduser("~/ros2_spirob_ws/exp_ws/results")      
        
       # Use socket to send file sync signal when the dictionary is updated. 
        HOST = "0.0.0.0"
        PORT = 5007
        self.s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        self.s.bind((HOST,PORT))
        self.s.listen(1)
        self.get_logger().info(f"TCP server listening on {HOST}:{PORT} (waiting for Mac to connect)")
        self.conn, self.addr = self.s.accept()

        # Start the time after connection is established
        self.timer_period = 1
        self.timer = self.create_timer(self.timer_period, self.timer_callback)
        

    def timer_callback(self):

        if not self.get_parameter("rsync_flag").value:
            msg = 0
        else:
            msg = 1

        self.conn.sendall((json.dumps(msg)+"\n").encode('utf-8'))

        self.set_parameters([
            Parameter("rsync_flag", Parameter.Type.BOOL, False)
        ])


def main(args = None):
    try:
        rclpy.init(args = args)
        node = FileRsyncNode()
        rclpy.spin(node)

        node.destroy_node()
        rclpy.shutdown()

    except KeyboardInterrupt:
        print("Program terminated by user")
        rclpy.shutdown()
        

if __name__ == '__main__':
    main()
