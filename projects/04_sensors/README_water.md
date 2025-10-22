# Water Level Sensor

Measure and display the water level value using an analog water sensor.  
The data is printed to the Serial Monitor.

---

## Project Overview

This project teaches:
- Reading analog input values with `analogRead()`  
- Monitoring real-time sensor data through the Serial Monitor  
- Understanding analog signal conversion on Arduino  

---

## Components Required

| Component | Quantity |
|------------|-----------|
| Arduino Uno | 1 |
| Water Level Sensor | 1 |
| Jumper Wires | Several |
| Breadboard | 1 |

---

## Circuit Connection

| Component | Arduino Pin |
|------------|--------------|
| Sensor Signal | A0 |
| Sensor VCC | 5V |
| Sensor GND | GND |

📸 *(Optional)* Add your circuit diagram or wiring photo here.

---

## Code Example

```cpp
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
