# Arduino Frequency Detector For Electrical Guitars

<p>An Arduino code that recognizes an electrical guitar's frequency and it's SPN and displays it to an LCD.</p>

# Features

<ul>

  <li>
  Recognizes electrical frequencies up to 4.8kHz
  </li>
  <li>
  Determines the SPN up to B6
  </li>
  <li>
  Displays the frequency and the SPN on an LCD
  </li>

</ul>

# Built With

<ul>
  <li>
    Arduino IDE
  </li>
</ul>

# Circuit

<p>The signal must be amplified so that the Arduino can process it. The amplification is done by a non inverting operation amplifier, which amplifies it by 5.54 (Au = (100k/22k) + 1).</p>

<p>A DC Offset is necessary, because the Arduino's analog pins only work in the range between 0-5V. By making a voltage divider with 2 100k ohm resistors we "push" the base voltage to 2.5V, and by doing this we have room for the amplified signal, because the capacitor charges and decharges around this voltage.</p>

# Contributors

<b>Buni Roland István, Szabadi Tibor, Szabó Bence, Török Milán</b>
