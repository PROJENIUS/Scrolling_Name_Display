# Scrolling_Name_Display

This project displays a scrolling name or message on an 8x8 LED matrix using an Arduino board.
It continuously scrolls text from right to left, creating a smooth marquee effect suitable for name boards, decorative displays, or DIY signboards.

🧠 Features

Smooth horizontal scrolling of any text message.

Adjustable scroll speed.

Easy to customize displayed text (e.g., your name or greeting).

Simple and efficient use of MAX7219 LED matrix driver.

🧰 Hardware Requirements

Arduino UNO / Nano / Mega (any compatible board)

MAX7219 8x8 LED Matrix Module

Jumper Wires

Breadboard (optional)

🔌 Circuit Connections
MAX7219 Pin	Arduino Pin
VCC	5V
GND	GND
DIN	11 (MOSI)
CS	10
CLK	13 (SCK)

(You can modify these pin numbers in the code if needed.)

💻 Software Requirements

Arduino IDE

Install the following libraries via Library Manager:

LedControl.h or MD_MAX72xx (depending on your version)

SPI.h (comes pre-installed with Arduino IDE)

⚙️ How to Use

Open Scrolling_Name.ino in the Arduino IDE.

Connect your MAX7219 LED matrix and Arduino as per the circuit table.

In the code, replace the text (e.g., "Hariharan") with your desired message.

Select the correct Board and Port in the IDE.

Click Upload.

Watch your text scroll smoothly across the LED matrix!

🧩 Code Explanation

LedControl or MD_MAX72xx library manages LED matrix control.

loop() continuously shifts and refreshes the display to create a scrolling effect.

Text data is stored in an array and shifted pixel by pixel.

Delay values determine scroll speed (lower = faster scrolling).

🖼️ Output Preview

When uploaded successfully, the LED matrix will display:

>>> HARIHARAN >>>


Scrolling continuously across the display.

🪪 License

This project is open-source under the MIT License
.

🧭 Future Enhancements

Add multiple message support.

Control scroll speed using a potentiometer.

Add Bluetooth/Wi-Fi input to change text dynamically.

Include custom fonts and symbols.

⭐ If you like this project, consider starring the repository on GitHub!
