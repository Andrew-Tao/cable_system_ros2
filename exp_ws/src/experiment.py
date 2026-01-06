
import time
import subprocess
from datetime import datetime
from rosbag_to_csv import mcap_to_csv
import os
import signal

class ExperimentLauncher:
    
    def __init__(self, experiment_name = "NO_NAME", duration = 24):
          
          self.stamp = f"_{datetime.now().strftime('%Y-%m-%d_%H-%M-%S')}"
          self.exp_name = experiment_name + self.stamp
          self.duration = duration  # Duration in seconds
          self.bag_path = os.path.expanduser("~/ros2_spirob_ws/exp_ws/bags")
          self.bag_proc = None
          self.motor_proc = None
          self.bag_out_dir = None

    def launch_motor_publisher(self):

        launch_cmd = ["ros2","launch", "spirob_bringup", "exp.launch.py"]
        self.motor_proc = subprocess.Popen(launch_cmd, start_new_session=True)

    def stop(self):
            
        # Terminate motor publisher node and send zero commands to motors
    
        subprocess.run([
            "ros2", "param", "set",
            "/motor_publisher",
            "enable_running",
            "false"
        ], check=True)

         # Terminate the ros2 bag recording.

        self.bag_proc.send_signal(signal.SIGINT)

        self.motor_proc.send_signal(signal.SIGINT)

        # Convert the rosbag to csv format

        print(self.bag_out_dir)
        
        mcap_to_csv(self.bag_out_dir, self.exp_name)

        time.sleep(3)

        # Use Socket to send the result dictionary to Mac

        subprocess.run([
            "ros2", "param", "set",
            "/rsync_trigger_node",
            "rsync_flag",
            "True"
        ], check=True)


    def run(self):

        try:

            # Launch the motor_publisher_node

            self.launch_motor_publisher()
            
            # Launch the ros2 bag record.

            self.bag_out_dir = os.path.join(self.bag_path, self.exp_name)
            topic_recorded = ["/joystick_inputs", "/motor_status", "/load_data", "/video_frames"]
            bag_cmd = ["ros2", "bag", "record", "-o", self.bag_out_dir] + topic_recorded
            self.bag_proc = subprocess.Popen(bag_cmd, preexec_fn=os.setsid)

            # Wait for duration of the experiment

            time.sleep(self.duration)  

            self.stop()

        except KeyboardInterrupt:
             self.stop()
             print("\nCtrl+C detected. Exiting safely.")


def main():
    exp = ExperimentLauncher(experiment_name= "stablity_motor2")
    exp.run()

if __name__ == '__main__':
    main()
