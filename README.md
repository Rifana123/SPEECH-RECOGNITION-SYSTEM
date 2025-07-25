# SPEECH-RECOGNITION-SYSTEM

**COMPANY**: CODTECH IT SOLUTIONS

**NAME**: RIFANA NAZREEN A

**INTERN ID**:CT04DH23

**DOMAIN**: EMBEDDED SYSTEMS

**DURATION**: 4 WEEKS

**MENTOR**: NEELA SANTHOSH

DESCRIPTION:

This is a simple serial-controlled LED project using an Arduino Uno. It allows turning an LED on or off through serial input from a computer.

In the circuit, an LED is connected to digital pin 8 of the Arduino through a current-limiting resistor. The other end of the LED is connected to GND, completing the circuit.

The code starts by defining pin 8 as an output using `pinMode()`. The LED is initially set to off by writing LOW to the pin. Serial communication is started at a baud rate of 9600 using `Serial.begin(9600)`.

In the loop, the program waits for user input from the serial monitor. It reads the input string using `Serial.readStringUntil('\n')`, which waits for the Enter key. After removing extra spaces with `trim()`, it checks if the input is "ON" or "OFF":

* If "ON", the LED is turned on by writing HIGH to pin 8.
* If "OFF", the LED is turned off by writing LOW to pin 8.
* For any other input, it prints an error message.

This project demonstrates how to control devices using simple serial commands and can be expanded to control more components.

OUTPUT:

<img width="1918" height="803" alt="Image" src="https://github.com/user-attachments/assets/e9d5c284-b40b-48be-8ad2-bc0ebb8eb893" />
