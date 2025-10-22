# Blink LED

Blink the LED on the board.
No external circuit required.

---

## Project Overview

This project teaches:
- The recognition and application of the built-in LED on the development board  
- How to write simple control code to realize the on-off switching of LED lights  
- The use of delay functions to control the time interval of electronic component actions

---

## Components Required

| Component | Quantity |
|------------|-----------|
| Arduino Uno | 1 |

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
