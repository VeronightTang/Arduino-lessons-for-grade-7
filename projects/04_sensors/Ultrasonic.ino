#define TRIG_PIN 9   
#define ECHO_PIN 10  

long duration;   // Time for sound wave to travel
float distance;  

void setup() {
  Serial.begin(9600);          // Initialize serial communication
  pinMode(TRIG_PIN, OUTPUT);   // TRIG pin as output
  pinMode(ECHO_PIN, INPUT);    // ECHO pin as input
}

void loop() {
  // Send a 10 microsecond pulse to trigger the sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read the duration of the echo pulse (in microseconds)
  duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate distance (speed of sound is ~340 m/s, divide by 2 for round trip)
  distance = duration * 0.034 / 2;

  // Print the result to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000); // Measure every second
}
