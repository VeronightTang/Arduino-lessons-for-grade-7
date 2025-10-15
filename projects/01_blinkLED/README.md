# Blink LED

Blink the LED on the board.
No external circuit required.

---

## Project Overview

This project teaches:
- Reading button inputs  
- Controlling servo angles using the Servo library  
- Debouncing and basic logic control  

---

## Components Required

| Component | Quantity |
|------------|-----------|
| Arduino Uno | 1 |

---

## ⚡ Circuit Connection

| Component | Arduino Pin |
|------------|--------------|
| Left Button | D2 |
| Right Button | D3 |
| Servo Signal | D9 |
| Servo Power | 5V / GND |

(Optional) Add your circuit diagram or wiring photo here.

---

## Code Example

```cpp
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
