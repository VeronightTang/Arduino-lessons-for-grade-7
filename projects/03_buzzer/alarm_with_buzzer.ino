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

  if (buttonState == HIGH && lastButtonState == LOW) {
    alarmOn = !alarmOn;  
    delay(50);           
  }

  lastButtonState = buttonState; 

  if (alarmOn) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);  
  } else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }
}
