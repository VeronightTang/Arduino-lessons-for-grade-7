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
