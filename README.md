# Arduino-Assignment1
Arduino Uno countdown program using variables, functions while loops and Serial Monitor 
Arduino Assignment 1 — Smart Countdown

This project is submitted as Assignment 1 for the Programming C++ for Engineers Using Arduinocourse.

Project Overview

The Smart Countdown program demonstrates the use of fundamental Arduino programming concepts by performing a countdown from 5 to 1. During each countdown step:

* The current count value is displayed on the Serial Monitor.
* The on-board LED blinks a number of times equal to the current count value using the `flashLED()` function.

Once the countdown is complete, the program displays the message:

*=== Countdown Complete ===*

 Concepts Demonstrated

This project showcases the following programming concepts:

* Variables (`int`)
* Functions with parameters (`flashLED`)
* While loops
* Digital output control (`pinMode`, `digitalWrite`)
* Serial communication (`Serial.begin`, `Serial.print`, `Serial.println`)

How to Run the Program

1. Open the `.ino` file in the Arduino IDE.
2. Connect an Arduino Uno to your computer via USB.
3. Select Tools → Board → Arduino Uno.
4. Select the appropriate COM port under Tools → Port.
5. Click Upload to transfer the program to the Arduino board.
6. Open Tools → Serial Monitor** and set the baud rate to **9600.
7. Observe the countdown messages in the Serial Monitor and the corresponding LED blinking sequence.

## Learning Outcomes

Through this project, I gained practical experience in using variables, functions, loops, LED control, and serial communication. It also helped me understand how software logic interacts with hardware components in embedded systems programming.

 Author
Redeemer Akura 
2526402863