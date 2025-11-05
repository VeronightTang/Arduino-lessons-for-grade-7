# Arduino Alarm & Melody Projects

This repository contains two beginner-friendly Arduino projects demonstrating the use of **buzzers** and **buttons** to create simple sound-based systems.

---

## Table of Contents
1. [Project 1: Alarm](#project-1-alarm)  
2. [Project 2: Melody Player](#project-2-melody-player)  
3. [Code Example](#code-example)  

---

## Project 1: Alarm

### Project Overview
This project demonstrates a simple **alarm system** using a **button** and a **buzzer**.  
When the button is pressed, the buzzer produces a sound; when released, it stops.  
It’s a great introduction to basic input/output control in Arduino.

### Function
- **Press the button →** buzzer turns ON (sound alarm).  
- **Release the button →** buzzer turns OFF.

### Components Required
| Component | Quantity | Description |
|-----------|----------|-------------|
| Arduino Board | 1 | Any Arduino-compatible microcontroller (e.g., UNO, Nano) |
| Buzzer | 1 | Active or passive buzzer |
| Push Button | 1 | Normally open button |
| Resistor | 1 | 10kΩ pull-down resistor |
| Jumper Wires | Several | For connections |
| Breadboard | 1 | For circuit prototyping |

### Circuit Connection
| Arduino Pin | Component | Description |
|-------------|-----------|-------------|
| Pin 9 | Buzzer | Buzzer signal pin |
| Pin 7 | Button | Reads button state |
| GND | Buzzer & Button | Common ground connection |

**Wiring Notes:**
- One side of the button connects to **5V**.  
- The other side connects to **pin 7** and to **GND** through a **10kΩ resistor**.  
- The buzzer’s positive leg connects to **pin 9**, and the negative leg connects to **GND**.

---

## Project 2: Melody Player

### Project Overview
This project demonstrates how to make the Arduino play a **melody** using a buzzer.  
It introduces the concept of **tone frequencies**, **note duration**, and **timing** control.  
The example below plays a simple tune repeatedly.

### Components Required
| Component | Quantity | Description |
|-----------|----------|-------------|
| Arduino Board | 1 | Any Arduino-compatible board |
| Buzzer | 1 | Active or passive buzzer |
| Jumper Wires | Several | For connections |
| Breadboard | 1 | Optional for easy setup |

### Circuit Connection
| Arduino Pin | Component | Description |
|-------------|-----------|-------------|
| Pin 8 | Buzzer | Buzzer signal pin |
| GND | Buzzer | Common ground |

**Wiring Notes:**
- Connect buzzer positive to **pin 8**, negative to **GND**.

---

## Code Example

```cpp
int buzzerPin = 9;
int buttonPin = 7;

void setup() {
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    tone(buzzerPin, 1000, 200);  
  } else {
    noTone(buzzerPin);  
  }
}
