# Alarm System

Toggle an LED and buzzer alarm using a single button.  
Each button press switches the alarm ON or OFF.

---

## Project Overview

This project teaches:
- Using a button to toggle system states  
- Controlling LEDs and buzzers with digital pins  
- Simple logic and state change detection  

---

## Components Required

| Component | Quantity |
|------------|-----------|
| Arduino Uno | 1 |
| Push Button | 1 |
| LED | 1 |
| Buzzer | 1 |
| 220Ω Resistor (for LED) | 1 |
| 10kΩ Resistor (for Button, optional if using INPUT_PULLUP) | 1 |
| Jumper Wires | Several |
| Breadboard | 1 |

---

## Circuit Connection

| Component | Arduino Pin |
|------------|--------------|
| Button | D7 |
| LED | D8 |
| Buzzer | D9 |
| LED (–) | GND (via 220Ω resistor) |
| Buzzer (–) | GND |

📸 *(Optional)* Add your circuit diagram or wiring photo here.

---

## Code Example

```cpp
int buttonPin = 7;   
int ledPin = 8;      
int buzzerPin = 9;    

bool alarmOn = false;        
int lastButtonState = LOW;   

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  // Detect button press and toggle alarm state
  if (buttonState == HIGH && lastButtonState == LOW) {
    alarmOn = !alarmOn;  
    delay(50);  // Debounce delay
  }

  lastButtonState = buttonState; 

  if (alarmOn) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);  // Buzzer on
  } else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);      // Buzzer off
  }
}


