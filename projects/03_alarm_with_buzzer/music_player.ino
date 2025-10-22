int buzzerPin = 8;

int melody[] = {
  262, 262, 392, 392, 440, 440, 392,   
  349, 349, 330, 330, 294, 294, 262,   
  392, 392, 349, 349, 330, 330, 294,   
  392, 392, 349, 349, 330, 330, 294,   
  262, 262, 392, 392, 440, 440, 392,   
  349, 349, 330, 330, 294, 294, 262    
};

// Duration of each note (4 = quarter note, 8 = eighth note)
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
    delay(duration * 1.3); // Control the pause between notes
  }
  delay(2000); // Wait two seconds after playing
}
