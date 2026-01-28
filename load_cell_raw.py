"""
from hx711 import HX711
import RPi.GPIO as GPIO
import time 
import threading



class LoadCell:
    def __init__(self, dout_pin, pd_sck_pin, reference_unit=1):
        self.hx711 = HX711(dout_pin, pd_sck_pin, channel='A', gain=64)
        self.hx711.reset()
        self.latest_measurement = 0.0
        self.reference_unit = reference_unit


    def get_measurement(self, times=1):

        measurement = sum(self.hx711.get_raw_data(times)) / times
        #time.sleep(1/20)
        return measurement

    def _run_load_cells(self):
        while True:
            measurement = self.get_measurement(times=2)
            self.latest_measurement = measurement


if __name__ == "__main__":

    #Load Cell setup
    load_cell1 = LoadCell(dout_pin=5, pd_sck_pin=6, reference_unit=1)
    load_cell2 = LoadCell(dout_pin=13, pd_sck_pin=19, reference_unit=1)
    load_cell3 = LoadCell(dout_pin=20, pd_sck_pin=21, reference_unit=1)

    r1 = 0
    r2 = 0
    r3 = 0


    for i in range(500):

        r1 = load_cell1.get_measurement(times=2) / 1000
        #r2 = load_cell2.get_measurement(times=2) / 1000
        #r3 = load_cell3.get_measurement(times=2) / 1000

        format(r1,)
        print(f"{i:<12} {r1:>12.2f} {r2:>12.2f} {r3:>12.2f}")
"""

import time
import pigpio

from hx711 import HX711, CH_A_GAIN_128  # your papamac hx711.py

CLOCK_PIN = 6  # BCM
DATA_PIN  = 5  # BCM

READ_HZ = 5              # how often you print (slower = cleaner)
AVG_SAMPLES = 20         # internal averaging for stability

def read_weight_avg(scale: HX711, n=20, delay=0.01):
    """
    Average multiple scale.read() values.
    This improves precision and rejects noise.
    """
    vals = []
    for _ in range(n):
        vals.append(scale.read())
        time.sleep(delay)
    return sum(vals) / len(vals)

def read_raw_avg(scale: HX711, n=20, delay=0.01):
    vals = []
    for _ in range(n):
        vals.append(scale.read_raw_data())
        time.sleep(delay)
    return sum(vals) / len(vals)

def main():
    # Make sure pigpio daemon is running:
    # sudo pigpiod

    pi = pigpio.pi()
    if not pi.connected:
        raise RuntimeError("pigpio daemon not running (try: sudo pigpiod)")

    scale = HX711(pi, clock=CLOCK_PIN, data=DATA_PIN, mode=CH_A_GAIN_128)

    print("HX711 started.")
    print("If you have a saved calibration file, read() will return calibrated weight units.")
    print("Clear the scale, then press Enter to tare (zero).")
    input()

    scale.zero()
    print("Tared (zeroed). Reading... Ctrl+C to stop.\n")

    # Header
    print(f"{'t(s)':>8} {'raw_avg':>12} {'wt_avg':>12} {'wt_inst':>12}")
    print("-" * 50)

    t0 = time.time()
    period = 1.0 / READ_HZ

    try:
        while True:
            loop_start = time.time()

            # raw and weight (avg + instantaneous)
            raw_avg = read_raw_avg(scale, n=AVG_SAMPLES, delay=0.005)
            wt_avg  = read_weight_avg(scale, n=AVG_SAMPLES, delay=0.005)
            wt_inst = scale.read()  # single sample

            elapsed = time.time() - t0
            print(f"{elapsed:8.1f} {raw_avg:12.0f} {wt_avg:12.3f} {wt_inst:12.3f}")

            # maintain print rate
            sleep_left = period - (time.time() - loop_start)
            if sleep_left > 0:
                time.sleep(sleep_left)

    except KeyboardInterrupt:
        print("\nStopping...")

    finally:
        pi.stop()

if __name__ == "__main__":
    main()
