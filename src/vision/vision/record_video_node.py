#!/usr/bin/env python3
from vision.vision_system import VisionSystem
from rclpy.node import Node
import rclpy
import time
import threading
import os
import socket
from sensor_msgs.msg import CompressedImage
import cv2
import struct

class RecordVideoNode(Node):
    def __init__(self):
        super().__init__('record_video_node')

        self.vision_system = VisionSystem()
        self.vision_system.start_time = time.time()
        self.vision_system.path = "./recorded_frames"
        os.makedirs(self.vision_system.path, exist_ok=True)

        self.recording = True
        
        # Create a publisher for video frames
        self.publisher = self.create_publisher(CompressedImage, 'video_frames', 10) 
        self.timer_period = 1.0 / 20 # 20 Hz
        
        # Use socket to send frame over TCP
    
        HOST = "0.0.0.0"
        PORT = 5006
        self.s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        self.s.bind((HOST, PORT))
        self.s.listen(1)
        self.get_logger().info(f"TCP server listening on {HOST}:{PORT} (waiting for Mac to connect)")
        
   
        self.conn, self.addr = self.s.accept()

        # Start the time after connection is established
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        

    def timer_callback(self):
        if self.recording:
            
            frame = self.vision_system.capture_frame()

            encode_param = [int(cv2.IMWRITE_JPEG_QUALITY), 90]
            success, jpg_frame = cv2.imencode('.jpg', frame, encode_param)

            if not success:
                self.get_logger().warn("JPEG encoding failed")
                return
            
            msg = CompressedImage()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.format = "jpeg"
            msg.data = jpg_frame.tobytes()

            self.publisher.publish(msg)
            #self.get_logger().info(f"Published frame {self.vision_system.frame_counter}")

            # Send frame data over socket
            data = jpg_frame.tobytes()
            header = struct.pack("!I", len(data))
            self.conn.sendall(header + data)
            #self.get_logger().info(f"Sent frame {self.vision_system.frame_counter} over TCP")

            
def main():
    rclpy.init()
    record_video_node = RecordVideoNode()
    rclpy.spin(record_video_node)

    record_video_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
