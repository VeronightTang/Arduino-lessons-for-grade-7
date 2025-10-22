# DHT Temperature and Humidity Sensor

Read temperature and humidity values using a DHT11 or DHT22 sensor.  
Display the results in the Serial Monitor.

---

## Project Overview

This project teaches:
- Reading temperature and humidity data using the DHT sensor library  
- Handling invalid sensor readings with conditional checks  
- Displaying data on the Serial Monitor  

---

## Components Required

| Component | Quantity |
|------------|-----------|
| Arduino Uno | 1 |
| DHT11 or DHT22 Sensor | 1 |
| Jumper Wires | Several |
| Breadboard | 1 |
| (Optional) 10kΩ Resistor | 1 |

---

## Circuit Connection

| Component | Arduino Pin |
|------------|--------------|
| DHT Signal | D2 |
| DHT VCC | 5V |
| DHT GND | GND |

📸 *(Optional)* Add your circuit diagram or wiring photo here.

---

## Code Example

```cpp
#include "DHT.h"

#define DHTPIN 2       
#define DHTTYPE DHT11  // Can be changed to DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);   
  dht.begin();
}

void loop() {
  float humidity = dht.readHumidity();    
  float temperature = dht.readTemperature(); 

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print(" %\t");
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" *C");
  }

  delay(2000); 
}
