int waterSensorPin = A0;  

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int waterValue = analogRead(waterSensorPin); 

  Serial.print("Water Level: ");
  Serial.println(waterValue);

  delay(500);
}
