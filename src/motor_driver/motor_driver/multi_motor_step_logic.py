import pigpio
import threading
import time
from motor_driver.motor import StepperMotor
from typing import Tuple
import numpy as np
import matplotlib.pyplot as plt
from concurrent.futures import ThreadPoolExecutor, Future
import json
from pathlib import Path

"""
plt.figure()
plt.plot(timestamps, steps)
plt.xlabel("Time")
plt.ylabel("Step Command")
plt.title("Triangle Wave")
plt.tight_layout()

plt.savefig("triangle_wave.png", dpi=200)
plt.close()
"""

class MultiStepperMotor():
    def __init__(self, *motors: StepperMotor):     
        self.motors: Tuple[StepperMotor, ...] = motors
        self.pi = pigpio.pi()
        self.lock = threading.Lock()
        self.running = True
        self.thread = None 
        self._executor = ThreadPoolExecutor(max_workers= 1)

        #Tasks are a m * n * 2 list stored in ways of [[[timestamp...], [steps]],...] m is the number of motors
        self.tasks = []
        self.max_allowable_speed = 300 # Steps per seconds

        self.merged_tasks = None  # merged_timestamps (2,N) [[motor_index,...],[timestamps,...],[delta_steps,...]]
        self.pulses = None
    
        # For wave_form builders, built within self.recieve_data
       
        self.merged_motor_idx = None
        self.merged_timestamps = None
        self.merged_steps = None
        self.merged_delta_time = None
        self.merged_last_idx = None
        self.chunks = None

        # For data communication between MutiStepperMotor and the post-processing 
        self.execute_start_time = None
        self.execute_start_time_path = Path("/home/mgazzola/ros2_spirob_ws/var/execute_start_time.json")
        self.motor_profile_path = Path("/home/mgazzola/ros2_spirob_ws/var/motor_profile.json")

        self.execute_start_time_path.parent.mkdir(parents=True, exist_ok=True)
        self.execute_start_time_path.touch(exist_ok= True)
        self.motor_profile_path.touch(exist_ok= True)

    def recieve_task(self,tasks): 
        self.tasks = tasks
        # ---------------- recieve the tasks -------------------
        #[[timestamps], [steps]]
        # Check If the profile is possible 

        for task in tasks:
            speed_list = np.array([])
            for i in range(len(task[0])-1):
                speed_list = np.append(speed_list, (task[1,i+1] - task[1,i]) / (task[0,i+1] - task[0,i]))
            if max(speed_list) > self.max_allowable_speed:
                raise ValueError("Speed Profile exceeds the maximum allowable speed of motor at some point")
            
        # ---------------- Merge the tasks ---------------------
        self.merge_tasks()
        self.merged_motor_idx = self.merged_tasks[0]
        self.merged_timestamps = self.merged_tasks[1]
        self.merged_steps = self.merged_tasks[2]
        self.merged_delta_time = self.merged_tasks[3]

        self.merged_last_idx = [0] * len(self.motors)
        #print(self.merged_tasks)
    

        # Find the last motor index
        all_last_idx_found = np.array([False, False, False])
        search_pointer = len(self.merged_motor_idx) - 1
        while not np.all(all_last_idx_found) and search_pointer > 0:

            for i, found in enumerate(all_last_idx_found):
                if not found and self.merged_motor_idx[search_pointer] == i:
                    secondary_pointer = search_pointer
                    while secondary_pointer >= 0:
                        secondary_pointer -= 1
                        if self.merged_motor_idx[secondary_pointer] == i:
                            if self.merged_steps[secondary_pointer] !=0:
                                self.merged_last_idx[i] = search_pointer
                                all_last_idx_found[i] = True
                            else: break
            search_pointer += -1

        # Calculate merged delta time
        chunks = []
        for i, timestamps in enumerate(self.merged_timestamps):
            if i < len(self.merged_timestamps) - 1:
                interval = self.merged_timestamps[i+1] - self.merged_timestamps[i]
                if interval > 0: chunks.append(interval)
            else:
                break
        #print("Chunks",chunks,"Length",len(chunks))
        #print("last_idx",self.merged_last_idx)
        self.chunks = chunks

        # ---------------- Encode the tasks ---------------------
        self.pulses = self.generate_waveform()


    def execute_tasks(self) -> Future:
        if self.pulses is None:
            raise ValueError("The pul_pulses and dir_pulses are none. Check if you have recieve and tasks")
        
        handle = self._executor.submit(self.run)
        return handle
    
            
    def merge_tasks(self):
        # Number of tasks (motors)
        n_task = len(self.tasks)
        
        # ------- Generate merged timestamps and steps from all motors --------
        # merged_timestamps (2,N) [[motor_index,...],[timestamps,...],[delta_steps,...],[delta_time,...]]
        merged_tasks = []
        motor_pointer = np.zeros(n_task,dtype = int)
        points_reach_end = False

        while not points_reach_end:
          
            min_candidates = np.full(n_task,1e12) # A very large number where the motor can't even achieve
            for i in range(n_task):
               
                # Only add consider motors that the pointer hasn't reach the end
                if motor_pointer[i] < len(self.tasks[i][0]): 
                    min_candidates[i] = self.tasks[i][0,motor_pointer[i]]

            if min_candidates.min()==1e12:
                points_reach_end = True
            else:
                # Find the minimum timestamps and which motor it belongs to 
                min_val = min_candidates.min()
                min_idx = min_candidates.argmin()
                delta_step = 0
                # The last timestamps don's have an associated delta_step
                if motor_pointer[min_idx] < len(self.tasks[min_idx][0])-1:
                    delta_step = self.tasks[min_idx][1,int(motor_pointer[min_idx]+1)] - self.tasks[min_idx][1,int(motor_pointer[min_idx])]
                    delta_time = self.tasks[min_idx][0,int(motor_pointer[min_idx]+1)] - self.tasks[min_idx][0,int(motor_pointer[min_idx])]

                merged_tasks.append(np.array([min_idx,min_val,delta_step,delta_time]))
                # Update the pointer accordingly
                motor_pointer[min_idx] += 1
        merged_tasks = np.array(merged_tasks).T
        self.merged_tasks = merged_tasks

        return merged_tasks
    
    def pul_single_chunk_waveform_builder(
            self,
            periods: tuple[float,...],
            chunk: float,
            dir_on_mask,
            dir_off_mask)-> tuple[pigpio.pulse,...]:
        
        # chunk: float seconds
        # periods: float seconds

        pulses = []
        # ---- build one merged timeline wave (smooth multi-rate) ----
        chunk_us = chunk * 1e6 # Transfering seconds to micro_seconds
        for i in range(len(periods)): periods[i] = periods[i]*1e6 # Transfering seconds to micro_seconds

        step_masks = [1 << m.step_pin for m in self.motors]
        half_periods = [max(1, int(p // 2)) for p in periods]  # us, ensure >=1

        # next toggle times (relative), pin states
        t = 0
        next_toggle = [hp for hp in half_periods]
        state_high = [False] * len(self.motors)  # we toggle step pins high/low

        while t < chunk_us:
            t_next = min(next_toggle)
            if t_next >= 10**17: # Filter out the periods that's too large
                break  # nothing active

            # delay until next event
            delay = t_next - t
            if delay > 0:
                pulses.append(pigpio.pulse(dir_on_mask, dir_off_mask, delay)) # Only the dir_pins running
                t = t_next

            # toggle all motors that are due at this time
            on_mask = 0
            off_mask = 0
            for i in range(len(self.motors)):
                if next_toggle[i] == t:
                    if not state_high[i]:
                        on_mask |= step_masks[i]
                        state_high[i] = True
                    else:
                        off_mask |= step_masks[i]
                        state_high[i] = False
                    next_toggle[i] += half_periods[i]
            
            # apply the dir pin mask
            on_mask |= dir_on_mask
            off_mask |= dir_off_mask

            # apply the toggles at this exact time
            pulses.append(pigpio.pulse(on_mask, off_mask, 0))
        
        return pulses

    def dir_singe_chunk_waveform_builder(self,idx):

        merged_motor_idx = self.merged_motor_idx
        merged_timestamps = self.merged_timestamps
        merged_steps = self.merged_steps
        #---------- generate dir waveform ---------
        
        dir_on_mask = 0
        dir_off_mask = 0

        dir_masks = [1 << m.dir_pin for m in self.motors]
        
        for i, time_dir in enumerate(merged_timestamps):
            # Scan to the last chunk
            i += idx # Start from the given idx

            # Get the next Timestamps
            if i < len(merged_timestamps)-1:
                next_time = merged_timestamps[i+1]
            else:
                next_time = -999 # Something impossible to appear in timestamps

            # Get the dir and making the on_mask and off_mask
            if merged_steps[i] > 0: # Rotating in the positive direction
                dir_on_mask |= dir_masks[int(merged_motor_idx[i])]
            elif merged_steps[i] < 0: # Rotating in the positive direction
                dir_off_mask |= dir_masks[int(merged_motor_idx[i])]
           
            if merged_timestamps[i] == next_time:
                continue
            else:
                break
        #print("dir", dir_on_mask, dir_off_mask)

        return dir_on_mask, dir_off_mask

    def generate_waveform(self):

        # -----Generating pul waveforms -----
        merged_motor_idx = self.merged_motor_idx
        merged_timestamps = self.merged_timestamps
        merged_steps = self.merged_steps
        merged_delta_time = self.merged_delta_time
        merged_last_idx = self.merged_last_idx
        chunks = self.chunks

        pulses = []
    
        time = 0.0

        # Iterate to build the pul waveform
        last_time = -999
        chunk_idx = 0
        for i, time in enumerate(merged_timestamps):
            # Scan to the last chunk
            #print(last_time,time)
            if chunk_idx == len(chunks):
                break
            if last_time == time:
                continue

            periods = []
            chunk = chunks[chunk_idx]

            #Find the periods for each motor
            delta_steps = [0.0] * len(self.motors)
            delta_time = [1e15] * len(self.motors)
            for motor_idx in range(len(self.motors)):
                search_pointer = i
                if search_pointer >= merged_last_idx[motor_idx]: continue
                # Search forward for the overlapping timestamps if it's the start of the motor running
                while merged_timestamps[search_pointer] == merged_timestamps[i]:
                    if merged_motor_idx[search_pointer] == motor_idx:
                        delta_steps[motor_idx] = merged_steps[search_pointer]
                        delta_time[motor_idx] = merged_delta_time[search_pointer]
                        break
                    else:
                        search_pointer += 1
                search_pointer = i
                # Search Backward if it's being in a motor running interval
                while search_pointer >= 0:
                    if merged_motor_idx[search_pointer] == motor_idx:
                        delta_steps[motor_idx] = merged_steps[search_pointer]
                        delta_time[motor_idx] = merged_delta_time[search_pointer]
                        break
                    else:
                        search_pointer += -1

            for time_interval, step in zip(delta_time,delta_steps):
                periods.append(time_interval / max(abs(step),5e-4)) # Add abs to ensure that the periods are positive This is a potential faluire point which the last delta for on motor is very small!!
            #print("index",i,"chunk_idx",chunk_idx,"Delta time",delta_time,"Delta_steps", delta_steps,"periods",periods)
            
            # Generate the dir pins masks 
            dir_on_mask, dir_off_mask = self.dir_singe_chunk_waveform_builder(i)
            # Generate the waveform
            pulses.extend(self.pul_single_chunk_waveform_builder(periods,chunk,dir_on_mask,dir_off_mask))

            #Update the last_time and chunk_idx
            last_time = time
            chunk_idx += 1

        return pulses
        
    def run(self):

        self.pi.wave_add_generic(self.pulses)
        wave_id = self.pi.wave_create()
        # record done the start time
        self.execute_start_time = time.time()
        self.pi.wave_send_once(wave_id)

        # Write down the executing information to the targeted file
        tasks = []
        for arr in self.tasks:
            tasks.append(arr.tolist())

        with open(self.motor_profile_path, "w") as f:
            json.dump(tasks, f, indent =2) 
        
        with open(self.execute_start_time_path, "w") as f:
            json.dump(self.execute_start_time, f, indent = 2)

        # BLOCK until finished transmitting
        while self.pi.wave_tx_busy():
            time.sleep(0.001)
 
        self.pi.wave_tx_stop()
        self.pi.wave_delete(wave_id)

def print_pulses(pulses):
    for i, p in enumerate(pulses):
        on = [gpio for gpio in range(32) if p.gpio_on & (1 << gpio)]
        off = [gpio for gpio in range(32) if p.gpio_off & (1 << gpio)]

        print(
            f"[{i:03d}] "
            f"ON: {on if on else '-'} | "
            f"OFF: {off if off else '-'} | "
            f"delay = {p.delay/1e6} s"
        )
        
def print_pulses_timeline(pulses):
    t = 0
    for i, p in enumerate(pulses):
        on = [g for g in range(32) if p.gpio_on & (1 << g)]
        off = [g for g in range(32) if p.gpio_off & (1 << g)]

        print(
            f"t={t:8d} µs → {t + p.delay:8d} µs | "
            f"+{on if on else '-'}  -{off if off else '-'}"
        )
        t += p.delay


if __name__ == "__main__":

    motor1 = StepperMotor(25, 24)
    motor2 = StepperMotor(9, 11)
    motor3 = StepperMotor(17, 27)

    motors = MultiStepperMotor(motor1, motor2, motor3)


    # Generate an example task, a triangle wave
    steps = np.array([])
    timestamps = np.linspace(0, 20, 1000) # Seconds

    #print(continious_task.shape)

    discrete_task_0 = np.array([[0.0,0.0],
                            [2.0,0.0],
                            [4.0,0.0],
                            [6.0,0.0],
                            [8.0, 0.0]]).T

    discrete_task_1 = np.array([[0.0,0.0],
                            [2.0,3.0],
                            [4.0,0.0],
                            [6.0,-3.0],
                            [8.0, 0.0]]).T
    
    discrete_task_2  = np.array([[0.0,0.0],
                            [4.0,-3.0],
                            [5.0,-3.0]]).T
    #print(discrete_task_1.shape)

    periods = [10, 21, 10000]
    chunk = 100
    motors.recieve_task([discrete_task_0,discrete_task_2])
    #motors.merge_tasks()
    #pulses = motors.generate_waveform()
    #print_pulses(pulses)
    #print(motors.merged_tasks)
    #wave = motors.single_chunk_waveform_builder(periods,chunk)
    #print_pulses(wave)
    #handle = motors.execute_tasks()
    #print("Motor running ...")

    #result = handle.result()

    #print("The motor finish the task")
   


    


