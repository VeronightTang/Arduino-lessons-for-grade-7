# LED Button Control

Turn an LED on or off using a push button.  
When the button is pressed, the LED lights up; when released, it turns off.

---

## Project Overview

This project teaches:
- Reading button input using `digitalRead()`  
- Controlling digital output pins with `digitalWrite()`  
- Basic understanding of logic control  

---

## Components Required

| Component | Quantity |
|------------|-----------|
| Arduino Uno | 1 |
| LED | 1 |
| Push Button | 1 |
| 220Ω Resistor (for LED) | 1 |
| 10kΩ Resistor (for Button, optional if using INPUT_PULLUP) | 1 |
| Jumper Wires | Several |
| Breadboard | 1 |

---

## Circuit Connection

| Component | Arduino Pin |
|------------|--------------|
| LED (+) | D8 |
| LED (–) | GND (via 220Ω resistor) |
| Button | D7 |
| Button other side | 5V |
| (Optional) Pull-down Resistor | 10kΩ between D7 and GND |

📸 *(Optional)* Add your circuit diagram or wiring photo here.

---

## Code Example

```cpp
int ledPin = 8;
int buttonPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }                  
}
