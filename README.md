# Arduino Frequency Detector For Electrical Guitars

An Arduino code that recognizes an electrical guitar's frequency and it's SPN and displays it to an LCD.

# Features

- Recognizes electrical frequencies up to 4.8kHz

- Determines the SPN up to B6

- Displays the frequency and the SPN on an LCD



# Built With

- Arduino IDE

# Circuit

The signal must be amplified so that the Arduino can process it. The amplification is done by a non inverting operation amplifier, which amplifies it by 5.54 (Au = (100k/22k) + 1).

A DC Offset is necessary, because the Arduino's analog pins only work in the range between 0-5V. By making a voltage divider with 2 100k ohm resistors we "push" the base voltage to 2.5V, and by doing this we have room for the amplified signal, because the capacitor charges and decharges around this voltage.

# LCD Wiring

- Vss, RW, K pins are grounded.

- Vdd, A pins are connected to 5V.

- V0 pin is responsible for the contrast on the LCD, connect it with a 10k potentiometer, so you are able to change the contrast for your liking.

- Wire the RS pin to the Arduino's PWM 1 pin.

- Wire the E pin to the Arduino's PWM 2 pin.

- Connect the last 4 data pins to the Arduino's PWM 4-7 pins in order.


# Contributors

**Buni Roland István, Szabadi Tibor, Szabó Bence, Török Milán**
