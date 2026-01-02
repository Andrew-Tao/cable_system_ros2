# cable_system_ros2
Control programs for the cable driver test system.




**The following codes are the basic procdure to activate the cable test system**
**It's composed of two parts 1. Launch the ROS nodes on rabsberry pi 2. Connect socket pipe from your Mac**

Before launch the system, run

```bash
cd ros2_spirob_ws
source install/setup.bash
sudo gpiod # password is "password"
source .venv/bin/activate
```

Start the cable experimental system and it will run motor_driver, vision, load_cell.

```bash 
ros2 launch spirob_bringup spirob.launch.py
```

Then open a terminal on the mac and run the `launch_socket_pipe.py` to build TCP connection with raspberry pi. The video and GUI will be automatically display on your macbook.

```bash 
cd spirob_ws/
source spirob_venv/bin/activate
python3 launch_socket_pipe.py
```
**After start the cable system and establish the socket connection, you can run the experiment with the following code. The experimental data csv file will automatically be on your mac after the experiment is done**


