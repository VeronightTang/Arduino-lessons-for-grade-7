# Blink the onboard LED

Blink the LED on Arduino board. 
No external circuit required.

---

## 🧠 Project Overview

This project teaches:
- Reading button inputs  
- Controlling servo angles using the Servo library  
- Debouncing and basic logic control  

---

## 🧰 Components Required

| Component | Quantity |
|------------|-----------|
| Arduino Uno | 1 |
| SG90 Servo Motor | 1 |
| Push Button | 2 |
| 10kΩ Resistor | 2 |
| Jumper Wires | Several |

---

## ⚡ Circuit Connection

| Component | Arduino Pin |
|------------|--------------|
| Left Button | D2 |
| Right Button | D3 |
| Servo Signal | D9 |
| Servo Power | 5V / GND |

📸 (Optional) Add your circuit diagram or wiring photo here.

---

## 💻 Code Example

```cpp
#include <Servo.h>
Servo servo;
int pos = 90;
const int leftButton = 2;
const int rightButton = 3;

void setup() {
  servo.attach(9);
  pinMode(leftButton, INPUT_PULLUP);
  pinMode(rightButton, INPUT_PULLUP);
  servo.write(pos);
}

void loop() {
  if (digitalRead(leftButton) == LOW && pos > 0) {
    pos -= 10;
    servo.write(pos);
    delay(200);
  }
  if (digitalRead(rightButton) == LOW && pos < 180) {
    pos += 10;
    servo.write(pos);
    delay(200);
  }
}
