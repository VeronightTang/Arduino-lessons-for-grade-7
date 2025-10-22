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

---

# Music Player

Play a simple melody using a buzzer connected to Arduino.  
The buzzer generates different frequencies to play musical notes.

---

## Project Overview

This project teaches:
- Generating tones using the `tone()` function  
- Working with arrays for melodies and note durations  
- Understanding timing and delay control  

---

## Components Required

| Component | Quantity |
|------------|-----------|
| Arduino Uno | 1 |
| Buzzer | 1 |
| Jumper Wires | Several |
| Breadboard | 1 |

---

## Circuit Connection

| Component | Arduino Pin |
|------------|--------------|
| Buzzer (+) | D8 |
| Buzzer (–) | GND |

📸 *(Optional)* Add your circuit diagram or wiring photo here.

---

## Code Example

```cpp
int buzzerPin = 8;

int melody[] = {
  262, 262, 392, 392, 440, 440, 392,   
  349, 349, 330, 330, 294, 294, 262,   
  392, 392, 349, 349, 330, 330, 294,   
  392, 392, 349, 349, 330, 330, 294,   
  262, 262, 392, 392, 440, 440, 392,   
  349, 349, 330, 330, 294, 294, 262    
};

// Note duration (4 = quarter note, 8 = eighth note)
int noteDurations[] = {
  4,4,4,4,4,4,2,
  4,4,4,4,4,4,2,
  4,4,4,4,4,4,2,
  4,4,4,4,4,4,2,
  4,4,4,4,4,4,2,
  4,4,4,4,4,4,2
};

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int notes = sizeof(melody) / sizeof(melody[0]);
  for (int i = 0; i < notes; i++) {
    int duration = 1000 / noteDurations[i];
    tone(buzzerPin, melody[i], duration);
    delay(duration * 1.3); // Delay between notes
  }
  delay(2000); // Wait before replaying
}
