# QuizShowBox

Choose a README language:
- 👉 **English**
- [Portuguese](https://github.com/InfiniteMarcus/QuizShowBox/blob/main/README_pt-br.md)

## About the project

This project is a kind of Arduino box for quiz shows between two people and with one referee.

The referee with read the questions, and, after that, the competitiors need to press their own buttons. The first one to press it can try to answer the question.

The box will make an sound alert of one second and will be colored in the specific color of the competitor (by default, red or blue).

The referee can restart the system with one control button.

## Getting started

### Wiring

![Wiring image](https://github.com/InfiniteMarcus/QuizShowBox/blob/main/imgs/circuit.png)

The wiring image was originally created with [TinkerCad](https://www.tinkercad.com/), but some adaptations were made to better describe the components.

### List of componenets

- *Arduino UNO R3*
- *Power supply for Arduino* [*]
- *12V power supply*
- *12V RGB LED Strip*
- *12V siren or other similar output sound device*
- *3 MOSFET transistors (compatible with 12V)*
- *3 Resistors (calculated for the MOSFETs)*
- *1 100 Ohms resistor*
- *3 push buttons (or other pull-down buttons)*
- *Breadboard / PCB Board*
- *Jumpers / wires to connect components*

[*] Necessary if you don't want to create one more circuit to use the 12V supply to power the Arduino.

### Code

All the necessary source code can be found in `Program.ino` file. You will need to compile and upload it to your Arduino UNO using a software like [Arduino IDE](https://www.arduino.cc/en/software).