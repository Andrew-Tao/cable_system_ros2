import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Vector3

import tkinter as tk

import socket
import time
import json 
import threading


class GUISubscriber(Node):
    # This node subscribes to the 'motor_cmd' topic and 'joystick_input' topic
    # and sends messages to the Macbook via a TCP socket connection
    # spirob_window on the Macbook revieces the messages and updates the GUI accordingly
    def __init__(self):
        super().__init__('GUI_subscriber')

        self.subscription_motor = self.create_subscription(String,
        'motor_cmd', self.listener_callback_motor, 10)
        self.subscription_motor  # prevent prevent prevent to_callback


        self.subscription_joystick = self.create_subscription(Vector3,
        'joystick_inputs', self.listener_callback_joystick, 10)
        self.subscription_joystick  # prevent prevent prevent to

        self.timer = self.create_timer(1/20, self.send_message)


        # Latest messages received from the 'motor_cmd' and 'joystick_inputs' topics
        self._latest_motor_cmd = -1
        self._latest_joystick_input = {"x": 0.0, "y": 0.0, "z": 0.0}
        self._latest_stamp = time.time()


        self._lock = threading.Lock()

        
        # Create a TCP socket and bind it to the local host and port 5005
        HOST = "0.0.0.0"
        PORT = 5005
        self.s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.s.bind((HOST, PORT))
        self.get_logger().info("Listening for incoming connections...")
        self.s.listen(5)
        self.conn, self.addr = self.s.accept()
        self.get_logger().info("Connection established with %s" % str(self.addr))
       

    def listener_callback_motor(self, msg):

        #self.get_logger().info('I heard: "%s"' % msg.data)
        with self._lock:
            self._latest_motor_cmd = int(msg.data) if msg.data != "" else -1
            self._latest_stamp = time.time()

    def listener_callback_joystick(self, msg):

        #self.get_logger().info('I heard: "%s"' % msg.x)
        with self._lock:
            self._latest_joystick_input = {"x":float(msg.x), "y":float(msg.y), "z":float(msg.z)}
            print(self._latest_joystick_input)
            self._latest_stamp = time.time()


    def send_message(self):
        payload  = {"t_unix":self._latest_stamp, "motor_cmd": self._latest_motor_cmd, "joystick_inputs": self._latest_joystick_input}
        # Convert the payload to a JSON string and send it to the Macbook via the TCP socket connection
        self.conn.sendall((json.dumps(payload)+"\n").encode('utf-8'))


def main(args=None):

    try:
        rclpy.init(args = args)
        GUI_subscriber = GUISubscriber()
        rclpy.spin(GUI_subscriber)

        GUI_subscriber.destroy_node()
        rclpy.shutdown()

    except KeyboardInterrupt:
        print("Program terminated by user")
        rclpy.shutdown()
        

if __name__ == '__main__':
    main()
