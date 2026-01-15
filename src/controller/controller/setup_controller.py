import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Vector3
import numpy as np
from queue import Queue
import threading
from controller.pid_controller import PIDController
from controller.norm_to_three_motors import stick_norm_to_triangle

class PIDCmdPublisher(Node):

    def __init__(self):

        super().__init__('pid_cmd_publisher')

        # PID Control parameters and data structures
        self.lock = threading.Lock()
        self.pid_q = Queue()
        self._latest_motor_status = None
        self._latest_joystick_inputs = None

        self.kp = 3.5
        self.ki = 0.2
        self.kd = 3.5/20

        # Normalize PID parameters
        normalization_factor = 0
        if normalization_factor != 0:
            self.kp /= normalization_factor
            self.ki /= normalization_factor
            self.kd /= normalization_factor
        
        self._latest_speed = None

        self.joysticker_range = 250.0 # Steps
        self.max_motor_speed = 3000.0 / 1000.0 # Steps per second
    
        self.pid_controller1 = PIDController(self.kp, self.ki, self.kd) # Motor 1
        self.pid_controller2 = PIDController(self.kp, self.ki, self.kd) # Motor 2
        self.pid_controller3 = PIDController(self.kp, self.ki, self.kd) # Motor 3



        # Publisher to publish motor commands
        self.pid_publisher = self.create_publisher(Vector3,'motor_cmd',10)
        self.timer_period = 1/20 #Second
        self.timer = self.create_timer(self.timer_period, self.pid_control_loop)
        self.i = 0
        
        # Subscriber to listen to motor status
        self.motor_subscription = self.create_subscription(
            Vector3,
            'motor_status',
            self.motor_status_listener_callback,
            10)
        self.motor_subscription

        # Subscription to /joystick_inputs
        self.joystick_subscription = self.create_subscription(
            Vector3,
            'joystick_inputs',
            self.joystick_inputs_listener_callback,
            10)
        self.joystick_subscription
        

    def motor_status_listener_callback(self, msg):
        #self.get_logger().info(f"Motor status received: x={msg.x}, y={msg.y}, z={msg.z}")
        with self.lock:
            self._latest_motor_status = msg
            #self.try_combine_data()

    def joystick_inputs_listener_callback(self, msg):
        #self.get_logger().info(f"Joystick inputs received: x={msg.x}, y={msg.y}, z={msg.z}")
        with self.lock:
            self._latest_joystick_inputs = msg
            #self.try_combine_data()

    def try_combine_data(self):
        
        if self._latest_motor_status is not None and self._latest_joystick_inputs is not None:
            # Combine data and put into queue
            #self.get_logger().info("Combining motor status and joystick inputs for PID control.")
            combined_data = (self._latest_motor_status, self._latest_joystick_inputs)
            self.pid_q.put(combined_data)
            
    def pid_control_loop(self):
        msg = String()

        # motor_status: Vector3
        # joystick_inputs: Vector3
        # motor_status is the measurement and joystick_input is the setpoint for the PID controller
        
        if self._latest_motor_status is None or self._latest_joystick_inputs is None:
            return
        
        motor_status = self._latest_motor_status
        joystick_inputs = self._latest_joystick_inputs

        # Convert joystick inputs to triangular motor setpoints
        setpoint = stick_norm_to_triangle(joystick_inputs.x, joystick_inputs.y)

        _motor_cmd = [0.0,0.0,0.0]
        
        max_dir = max(abs(setpoint))

        if max_dir <= 0.5:
            _motor_cmd = [0.0,0.0,0.0]
            #self.get_logger().info("Setpoint too low.")

        else:
            #self.get_logger().info(f"Setpoints: Motor1={setpoint[0]}, Motor2={setpoint[1]}, Motor3={setpoint[2]}")   
            for i in range(3):
                if abs(setpoint[i]) == max_dir:
                    _motor_cmd[i] = 800.0 if setpoint[i] > 0 else -800.0
                    continue

        msg = Vector3()
        msg.x = _motor_cmd[0]
        msg.y = _motor_cmd[1]
        msg.z = _motor_cmd[2]
        print(msg)

        self.pid_publisher.publish(msg)

def main(args = None):
    rclpy.init(args = args)

    pid_cmd_publisher = PIDCmdPublisher()

    rclpy.spin(pid_cmd_publisher)

    pid_cmd_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

        
