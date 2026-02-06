import psutil
import hx711
import hx711_abyz
import RPi.GPIO as GPIO
import time 
import threading
import numpy as np
import pigpio
from tqdm import tqdm
# from scipy import stats
import argparse
import logging
from concurrent.futures import ThreadPoolExecutor
import multiprocessing

class LoadCell_abyz(hx711_abyz.HX711):
    def __init__(self, gpio, dout_pin, pd_sck_pin):
        super().__init__(gpio, pd_sck_pin, dout_pin)

    def get_measurement(self, times=1):
        return super().read_raw_data()
    
class LoadCell_hx711(hx711.HX711):
    def __init__(self, dout_pin, pd_sck_pin):
        super().__init__(dout_pin, pd_sck_pin, channel='A', gain=64)

    def get_measurement(self):
        return super().get_raw_data(1)[0]

class LoadCell_hx711_sync(hx711.HX711):
    pd_sck_pin = None
    ready = threading.Event()

    def __init__(self, dout_pin, pd_sck_pin):
        super().__init__(dout_pin, pd_sck_pin, channel='A', gain=64)
        if (self.pd_sck_pin is not None) and (pd_sck_pin != self.pd_sck_pin):
            raise Exception("All synced load cells must share a clock pin")
        
        self.pd_sck_pin = pd_sck_pin
        self.dout_pin = dout_pin

    def get_measurement(self):
        GPIO.output(self.pd_sck_pin, False)
        # GPIO.wait_for_edge(self.dout_pin, GPIO.FALLING)

        # init the counter
        ready_counter = 0

        # loop until HX711 is ready
        # halt when maximum number of tires is reached
        while self._ready() is False:
            time.sleep(0.01)  # sleep for 10 ms before next try
            ready_counter += 1  # increment counter
            # check loop count
            # and stop when defined maximum is reached
            if ready_counter >= 40:
                logging.debug('self._read() not ready after 40 trials\n')
                return False

        # pasted from hx711
        data_in = 0  # 2's complement data from hx 711
        # read first 24 bits of data
        # data_in_record = [bin(data_in)]
        for i in range(24):
            # request next bit from HX711
            GPIO.output(self.pd_sck_pin, True)
            GPIO.output(self.pd_sck_pin, False)

            # Shift the bits as they come to data_in variable.
            # Left shift by one bit then bitwise OR with the new bit.
            data_in = (data_in << 1) | GPIO.input(self.dout_pin)
            # data_in_record.append(bin(data_in))

        if self.channel == 'A' and self.channel_a_gain == 128:
            self._set_channel_gain(num=1)  # send one bit
        elif self.channel == 'A' and self.channel_a_gain == 64:
            self._set_channel_gain(num=3)  # send three bits
        else:
            self._set_channel_gain(num=2)  # send two bits

        # check if data is valid
        # 0x800000 is the lowest
        # 0x7fffff is the highest possible value from HX711
        if data_in == 0x7fffff or data_in == 0x800000 or (len(bin(data_in)) > 22):
            logging.warning('Invalid data detected: ' + str(bin(data_in)))
            # logging.warning(data_in_record)
            return False

        # calculate int from 2's complement
        signed_data = 0
        if (data_in & 0x800000):  # 0b1000 0000 0000 0000 0000 0000 check if the sign bit is 1. Negative number.
            signed_data = -((data_in ^ 0xffffff) + 1)  # convert from 2's complement to int
        else:  # else do not do anything the value is positive number
            signed_data = data_in

        logging.debug('Converted 2\'s complement value: ' + str(signed_data))

        return signed_data

def run_test(N: int, end_event: threading.Event):
    print(f"Reading {N} samples from each load cell")

    data = np.full((N, 3), np.nan)
    times = np.full((N, 3), np.nan)
    try:
        for i in tqdm(range(N)):
            for j, load_cell in enumerate(load_cells):
                start_time = time.perf_counter_ns()
                measurement = load_cell.get_measurement()
                data[i][j] = int(measurement / 1000)
                times[i][j] = time.perf_counter_ns() - start_time
    except KeyboardInterrupt:
        print("Performing cleanup...")
    finally:
        end_event.set()
        return data, times

def stress(end_event: threading.Event):
    print("Running stress")
    a = np.arange(2 * 2 * 4).reshape((2, 2, 4))
    b = np.arange(2 * 2 * 4).reshape((2, 4, 2))
    while not end_event.is_set():
        np.matmul(a, b)
        # np.sqrt(999999999.999999999)

def multiprocess_stress(end_event: threading.Event):
    cores = multiprocessing.cpu_count()
    print(f"Running stress on all {cores} cores")
    processes = []
    for _ in range(cores):
        p = multiprocessing.Process(target=stress, args=(end_event,))
        p.start()
        processes.append(p)
    return processes

def track_cpu(end_event: threading.Event):
    print("Tracking CPU usage")
    cpu = []
    while not end_event.is_set():
        load = psutil.cpu_percent(interval=1)
        cpu.append(load)
    return np.array(cpu)

if __name__ == "__main__":
    GPIO.setwarnings(False)

    parser = argparse.ArgumentParser(
        prog='Load Cell Test',
        description='Test for reliability of HX711 load cell readings',
    )
    parser.add_argument("-n", "-number-of-cycles", default=100, type=int)
    parser.add_argument("-l", "-load-cell-type", choices=['abyz', 'hx711', 'sync'], default='hx711', type=str)
    parser.add_argument("-s", "-run-stress", action='store_true')
    parser.add_argument("-c", "-track-cpu", action='store_true')

    args = parser.parse_args()

    print(f"Running test with {args.n} cycles and with load cell type {args.l}")

    # Load Cell setup

    if args.l == 'abyz':
        gpio = pigpio.pi()
        load_cell1 = LoadCell_abyz(gpio, dout_pin=5, pd_sck_pin=19)
        load_cell2 = LoadCell_abyz(gpio, dout_pin=13, pd_sck_pin=19)
        load_cell3 = LoadCell_abyz(gpio, dout_pin=20, pd_sck_pin=19)
    elif args.l == 'sync':
        load_cell1 = LoadCell_hx711_sync(dout_pin=5, pd_sck_pin=19)
        load_cell2 = LoadCell_hx711_sync(dout_pin=13, pd_sck_pin=19)
        load_cell3 = LoadCell_hx711_sync(dout_pin=21, pd_sck_pin=19)
    else:
        load_cell1 = LoadCell_hx711(dout_pin=5, pd_sck_pin=19) # 6)
        load_cell2 = LoadCell_hx711(dout_pin=13, pd_sck_pin=19)# 19)
        load_cell3 = LoadCell_hx711(dout_pin=21, pd_sck_pin=19) # 21)

    load_cells = [load_cell1, load_cell2, load_cell3]

    # threads = [threading.Thread(target=load_cell.get_measurement) for load_cell in load_cells]

    N = args.n # 100

    with ThreadPoolExecutor() as executor:
        end_event = threading.Event()
        if args.s:
            # executor.submit(stress, end_event)
            processes = multiprocess_stress(end_event)
        test_future = executor.submit(run_test, N, end_event)
        if args.c:
            cpu_future = executor.submit(track_cpu, end_event)

        data, times = test_future.result()
        cpu = cpu_future.result()

        if args.s:
            for p in processes:
                p.terminate()

        print(data)

        # count outliers
        Q1 = np.percentile(data, 25, axis=0)
        Q3 = np.percentile(data, 75, axis=0)
        IQR = Q3 - Q1
        lower_bound = Q1 - 1.5 * IQR - 1
        upper_bound = Q3 + 1.5 * IQR + 1
        # print(lower_bound, upper_bound)
        
        # n_outliers = np.sum((data > upper_bound) | (data < lower_bound), axis=0)

        n_outliers = np.zeros(3)
        max_consec_outliers = np.zeros(3)
        current_consec_outliers = np.zeros(3)
        for row in data:
            is_outlier = (row > upper_bound) | (row < lower_bound)
            n_outliers += is_outlier
            for i in range(3):
                if is_outlier[i]:
                    current_consec_outliers[i] += 1
                else:
                    if current_consec_outliers[i] > max_consec_outliers[i]:
                        max_consec_outliers[i] = current_consec_outliers[i]
                    current_consec_outliers[i] = 0

        print(f"Number of outliers: {n_outliers}")
        print(f"Max number of consecutive outliers: {max_consec_outliers}")

        print(f"Average Read Time: {np.nanmean(times / 1e6)} ms")
        print(f"Average CPU Usage: {np.nanmean(cpu)}%")

        # should_store_data = input("Store data? (Y/N) ").lower() == "y"
        # if should_store_data:
        #     file_name = input("File name: ")
        #     path = f"/src/scripts/load_cell_tests/{file_name}.csv"
        #     # open(path, 'w').close()
        #     np.savetxt(path, data, delimiter=',', fmt='%.2f')
