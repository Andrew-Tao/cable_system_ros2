"""
 PACKAGE:  Raspberry Pi based recording scale (scale)
  MODULE:  hx711.py
   TITLE:  Class to read the HX711 24-bit A/D conversion chip
FUNCTION:  hx711.py provides methods to read, zero, and calibrate a scale based
           on a load cell connected to a HX711 chip.
   USAGE:  hx711.py methods are called by the scale.py main program.  The
           hx711.py module also includes a main program that can be used to
           test a specific load cell/HX711/Raspberry Pi configuration.
  AUTHOR:  papamac
           Adapted from the unlicensed HX711 class by Ben Nuttall at
           http://abyz.me.uk/rpi/pigpio/code/HX711_py.zip
 VERSION:  1.0.2
    DATE:  May 23, 2020


MIT LICENSE:

Copyright (c) 2020 David A. Krause, aka papamac

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.


DESCRIPTION:

****************************** needs work *************************************

DEPENDENCIES/LIMITATIONS:

****************************** needs work *************************************

"""

__author__ = 'papamac'
__version__ = '1.0.2'
__date__ = 'May 23, 2020'


from datetime import datetime
from math import sqrt
from pathlib import Path
from threading import Event
from time import sleep

import pigpio

# Global constants:

CLOCK = 20                     # GPIO channel number for the clock pin (BCM).
DATA = 21                      # GPIO channel number for the data pin (BCM).
PULSE_WIDTH = 30               # Clock pulse width in microseconds.
CH_A_GAIN_128 = 1              # Mode 1 - channel A gain 128.
CH_B_GAIN_32 = 2               # Mode 2 - channel B gain 32.
CH_A_GAIN_64 = 3               # Mode 3 - channel A gain 64.
DEFAULT_MODE = CH_A_GAIN_128   # Default mode.
GAINS = (None, 128, 32, 64)    # Gain values indexed by mode.
DEFAULT_WEIGHT = 100           # Default calibration weight in grams.
DEFAULT_CALIBRATION = 17.5955  # Default calibration constant for my scale.
CALIBRATION_DIR = '/usr/local/etc/scale'  # Directory containing the scale
#                                           calibration file.


class HX711:
    """
    A class to read the HX711 24-bit ADC.
    """

    # Private_methods:

    def __init__(self, gpio, clock=CLOCK, data=DATA, mode=DEFAULT_MODE,
                 cal_dir=CALIBRATION_DIR):
        """
        Instantiate with the pigpio server object (pigpio.pi), the data GPIO,
        and the clock GPIO.

        Optionally the channel and gain may be specified with the
        mode parameter as follows.

        CH_A_GAIN_64  - channel A with gain 64
        CH_A_GAIN_128 - channel A with gain 128
        CH_B_GAIN_32  - channel B with gain 32
        """
        self._gpio = gpio

        # Initialize clock and data gpio channels.

        gpio.set_mode(clock, pigpio.OUTPUT)
        gpio.set_mode(data, pigpio.INPUT)

        # Define instance variables for use in the cloak/data gpio callback
        # methods.

        self._pulse_num = 0
        self._total_pulses = 24 + mode
        self._data_bit = 0
        self._shift_reg = 0
        self._raw_data = 0
        self._data_ready = Event()

        # Define the clock pulse and the wave chain needed to read a single
        # 24-bit A/D conversion (25-27 pulses).

        gpio.wave_clear()
        clock_mask = 1 << clock
        clock_pulse = [pigpio.pulse(clock_mask, 0, PULSE_WIDTH),
                       pigpio.pulse(0, clock_mask, PULSE_WIDTH)]
        gpio.wave_add_generic(clock_pulse)
        self._wave_id = gpio.wave_create()
        self._wave_chain = [255, 0, self._wave_id,
                            255, 1, self._total_pulses, 0]

        # Initialize calibration constants and mode-dependant variables.

        self._gain = GAINS[mode]
        self._offset = 0.0
        dir_path = Path(cal_dir)
        dir_path.mkdir(parents=True, exist_ok=True)
        self._cal_path = dir_path / Path('calibration')
        if self._cal_path.is_file():
            cal_file = open(self._cal_path, 'r')
            cal_str = cal_file.read()
            cal_file.close()
            try:  # Check for valid calibration constant.
                cal = float(cal_str)
            except ValueError:
                cal = DEFAULT_CALIBRATION
            if cal <= 0.0:
                cal = DEFAULT_CALIBRATION
            self._cal = cal

        # Start the HX711.

        gpio.write(clock, pigpio.HIGH)
        sleep(0.001)
        gpio.write(clock, pigpio.LOW)

        # Initialize callbacks for activity on the clock and data gpio
        # channels.

        self._clock_cb = gpio.callback(clock, pigpio.FALLING_EDGE,
                                       self._clock_falling)
        self._data_cb = gpio.callback(data, pigpio.EITHER_EDGE,
                                      self._data_either)

    def _clock_falling(self, *args):
        self._pulse_num += 1
        if self._pulse_num <= 24:
            self._shift_reg = (self._shift_reg << 1) + self._data_bit
            if self._pulse_num == 24:
                self._raw_data = self._shift_reg
                self._shift_reg = 0
                if self._raw_data & 0x800000:
                    self._raw_data |= ~0xffffff
                self._data_ready.set()
        elif self._pulse_num >= self._total_pulses:
            self._pulse_num = 0

    def _data_either(self, gpio, level, tick):
        self._data_bit = level
        if not level and not self._pulse_num:
            self._gpio.wave_chain(self._wave_chain)

    def _wait_for_data(self):
        self._data_ready.wait()
        self._data_ready.clear()

    def _get_raw_data_avg(self, num_readings=30):
        raw_data_sum = 0.0
        for _ in range(num_readings):
            self._wait_for_data()
            raw_data_sum += self._raw_data
        return raw_data_sum / num_readings

    # Public methods:

    def set_mode(self, mode=DEFAULT_MODE, num_to_skip=3):
        self._total_pulses = 24 + mode
        self._wave_chain = [255, 0, self._wave_id,
                            255, 1, self._total_pulses, 0]
        prior_gain = self._gain
        self._gain = GAINS[mode]
        self._offset = self._gain * self._offset / prior_gain
        for _ in range(num_to_skip):
            self._wait_for_data()

    def zero(self):
        self._offset = self._get_raw_data_avg()

    def calibrate(self, weight=DEFAULT_WEIGHT):
        self._cal = (self._get_raw_data_avg() - self._offset) / (self._gain *
                                                                 weight)
        cal_file = open(self._cal_path, 'w')
        cal_file.write(str(self._cal))
        cal_file.close()

    def read(self):
        self._wait_for_data()
        return (self._raw_data - self._offset) / (self._gain * self._cal)

    def read_raw_data(self):
        self._wait_for_data()
        return self._raw_data


if __name__ == "__main__":
    """
    Main program to test the HX711 class and monitor outlier readings.
    Error rate may be used to fine tune the PULSE_WIDTH for a specific
    Raspberry Pi model.
    """
    pi = pigpio.pi()
    scale = HX711(pi)

    # Test calibration and mode switching.

    print('\nStart with CH_A_GAIN_128')
    input('Clear scale to set offset and press return')
    scale.zero()
    input('Place 100g weight to calibrate scale and press return')
    scale.calibrate()
    print(scale.read(), scale._raw_data, scale._gain, scale._offset,
          scale._cal)
    print('\nSwitch to CH_A_GAIN_64 and start again.')
    scale.set_mode(CH_A_GAIN_64)
    print(scale.read(), scale._raw_data, scale._gain, scale._offset,
          scale._cal)
    input('Clear scale to set offset and press return')
    scale.zero()
    input('Place 100g weight to calibrate scale and press return')
    scale.calibrate()
    print(scale.read(), scale._raw_data, scale._gain, scale._offset,
          scale._cal)

    print('\nSwitch to CH_B_GAIN_32 and start again.')
    scale.set_mode(CH_B_GAIN_32)
    print(scale.read(), scale._raw_data, scale._gain, scale._offset,
          scale._cal)

    print('\nReturn to CH_A_GAIN_64 and start again.')
    scale.set_mode(CH_A_GAIN_64)
    print(scale.read(), scale._raw_data, scale._gain, scale._offset,
          scale._cal)

    # Test continuous reading.

    input('\nPress return to begin continuous reading\n')
    dt_start = datetime.now()
    num = 0
    num_stat = 0
    sumd = sumsq = 0.0
    avg = 0.0
    std = 1000000.0
    errs = 0
    err_rate = 0
    err_dict = {}

    while True:
        try:
            num += 1
            raw_data = scale.read_raw_data()
            diff = abs(raw_data - avg)
            if diff < 6 * std:
                num_stat += 1
                sumd += raw_data
                sumsq += raw_data * raw_data
                avg = sumd / num_stat
                if num_stat > 2:
                    std = sqrt(sumsq / num_stat - avg * avg)
            else:
                errs += 1
                err_dict[raw_data] = diff / std
            err_rate = 100 * errs / num
            print('%8x %8i %8i %8i %8i %8.2f %8i %8.2f'
                  % (raw_data, raw_data, avg, diff, std, diff / std, errs,
                     err_rate), end=' ')
            if diff >= 6 * std:
                print('\tvalue error')
            else:
                print()

        except KeyboardInterrupt:
            kb_input = input()
            if kb_input == 'q':
                break

    dt_stop = datetime.now()
    elapsed = (dt_stop - dt_start).total_seconds()
    rate = (num - errs) / elapsed
    print('\nelapsed time = %i seconds; number of samples = %i;\nrate = %4.1f '
          'samples/sec; errors = %s; error rate = %5.2f percent'
          % (elapsed, num, rate, errs, err_rate))

    for err_val in err_dict:
        print('%8x %8i %8.2f' % (err_val, err_val, err_dict[err_val]))

    pi.stop()