# cable_system_ros2

ROS 2 control framework for a **cable-driven test system** running on a Raspberry Pi with remote visualization, control, and data acquisition on a macOS client.

This repository provides motor control, vision streaming, load-cell acquisition, joystick input, and experiment orchestration for cable-driven robotic experiments.

---

## System Overview

The system consists of **two coordinated components**:

### 1. Raspberry Pi (ROS 2 Host)
Runs all hardware-level ROS 2 nodes:
- Motor drivers  
- Vision pipeline  
- Load-cell acquisition  
- Experiment orchestration and rosbag recording  

### 2. Mac (Client)
- Establishes a TCP socket connection to the Raspberry Pi  
- Displays live video and GUI  
- Receives experiment results automatically  

---

## Prerequisites

- ROS 2 installed on the Raspberry Pi  
- Python virtual environment (`.venv`)  
- `pigpio` installed and enabled on the Raspberry Pi  

---

## Installation

If this is your **first time using the package**, install Python dependencies:

```bash
pip install -r requirement.txt
``` 
---

## Running
**The following codes are the basic procdure to activate the cable test system**
**It's composed of two parts 1. Launch the ROS nodes on rabsberry pi 2. Connect socket pipe from your Mac**

Before launch the system, run

```bash
cd ros2_spirob_ws
source install/setup.bash
sudo pigpiod # password is "password"
source .venv/bin/activate
```

1. Start the cable experimental system and it will run motor_driver, vision, load_cell.

```bash 
ros2 launch spirob_bringup spirob.launch.py
```
If you want to use the joysticker to control the system run


```bash 
ros2 launch spirob_bringup spirob_joy.launch.py
```

2. Then open a terminal on the mac and run the `launch_socket_pipe.py` to build TCP connection with raspberry pi. The video and GUI will be automatically display on your macbook.

```bash 
cd spirob_ws/
source spirob_venv/bin/activate
python3 launch_socket_pipe.py
```
**After start the cable system and establish the socket connection, you can run the experiment with the following code. The experimental data csv file will automatically be on your mac after the experiment is done**
The experiments codes are stored in '/home/mgazzola/ros2_spirob_ws/exp_ws/src' which you can go in and specify experiment duraiton. etc. 
Open a new terminal and connect to rasberry pi via ssh. Then run the following commands.
```bash
cd ros2_spirob_ws
source install/setup.bash
source .venv/bin/activate
python3 exp_ws/src/experiment.py 
```
It will launch the motor_publihsher_node for experimental duration [s] and record the nodes (/motor_status /joystick_inputs /load_data /video_frames) into a rosbag and convert them into a csv file and use TCP to send the result onto your mac. 
To adjust the task you want to run, modify the function in the program `exp_ws/src/task_execute.py`


