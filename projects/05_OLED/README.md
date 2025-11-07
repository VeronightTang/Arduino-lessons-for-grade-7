# Arduino OLED Display Projects

This repository contains **three Arduino projects** using the **Adafruit SSD1306 OLED display**.  
They demonstrate how to display text, sensor readings, and environmental data such as water level, temperature, and humidity.

---

## Table of Contents
1. [Required Libraries](#required-libraries)  
2. [OLED Initialization Methods](#oled-initialization-methods)  
3. [Project 1: Hello OLED](#project-1-hello-oled)  
4. [Project 2: Water Sensor Display](#project-2-water-sensor-display)  
5. [Project 3: Temperature & Humidity Display](#project-3-temperature--humidity-display)  
---

## Required Libraries

Before running these OLED projects, make sure the following libraries are installed in your Arduino IDE.

You can install them via:
> **Arduino IDE → Tools → Manage Libraries…**  
> (or **Sketch → Include Library → Manage Libraries…**)  
> Then search for each library name and install the version by the specified author.

| Library Name | Author (Publisher) | Description | Installation Tip |
|---------------|--------------------|--------------|------------------|
| **Adafruit SSD1306** | *Adafruit* | Core driver library for the SSD1306 OLED display module (handles screen communication and buffer). | Search **“Adafruit SSD1306”** → install the one by **Adafruit**. |
| **Adafruit GFX Library** | *Adafruit* | Provides graphics functions (text, lines, shapes) required by SSD1306. | Search **“Adafruit GFX Library”** → install the one by **Adafruit**. |
| **Wire** *(built-in)* | *Arduino* | Handles I²C communication between Arduino and OLED. | Already included with the Arduino IDE — no manual installation needed. |
| **DHT sensor library** | *Adafruit* | Enables reading temperature and humidity data from DHT11/DHT22 sensors. | Search **“DHT sensor library”** → install the one by **Adafruit**. |
| **Adafruit Unified Sensor** | *Adafruit* | Common dependency for many Adafruit sensor libraries (required by DHT). | Search **“Adafruit Unified Sensor”** → install the one by **Adafruit**. |

**Quick Summary**
- All libraries are published by **Adafruit** (except Wire, which is built-in).  
- You can confirm correct libraries by checking the **author name** in the Library Manager.  
- Installing **Adafruit SSD1306** will automatically prompt to install **Adafruit GFX** if missing.  
- For temperature and humidity projects, make sure both **DHT sensor library** and **Adafruit Unified Sensor** are installed.

---

*Tip:* After installing, you can verify installation by navigating to:
> **File → Examples → Adafruit SSD1306 → ssd1306_128x64_i2c**  
If you can compile and upload that example successfully, your OLED setup is ready.

---

## OLED Initialization Methods

There are **two main ways** to define and initialize the OLED display, depending on your coding preference and library version:

| Method | Example Code | Description |
|---------|--------------|-------------|
| **1. Flexible Definition** | `Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);` | Uses width and height constants (`SCREEN_WIDTH = 128`, `SCREEN_HEIGHT = 64`) passed into the constructor. More flexible for multiple screen sizes. |
| **2. Direct Definition** | `Adafruit_SSD1306 display(128, 64, &Wire, -1);` | Hardcodes width and height directly in the constructor. Simpler and suitable when display size is fixed. |

**In summary:**  
- The first method is **clearer and adaptable**.  
- The second is **shorter and convenient** for small projects.

---

## Project 1: Hello OLED

### Project Overview
This introductory project displays the word **“Hello”** on a 128×64 I2C OLED screen.  
It demonstrates how to initialize and write text to the OLED using the Adafruit SSD1306 library.

### Function
- Initializes the OLED display through I2C.
- Displays a static message “Hello” in white text.
- Demonstrates basic display commands like `setTextSize()`, `setTextColor()`, `setCursor()`, and `display()`.

### Components Required
| Component | Quantity | Description |
|-----------|-----------|-------------|
| Arduino Board | 1 | UNO, Nano, or similar |
| SSD1306 OLED Display | 1 | 0.96" 128×64 I2C OLED |
| Jumper Wires | — | For I2C connections |
| Breadboard | 1 | Optional for prototyping |

**I2C Wiring:**
| OLED Pin | Arduino Pin |
|-----------|-------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

---

## Project 2: Water Sensor Display

### Project Overview
This project reads analog input from a **water or moisture sensor** and displays the sensor value on the OLED.  
It’s useful for creating a simple soil or water level monitor.

### Function
- Reads analog data from a sensor connected to **A0**.  
- Displays "Water:" followed by the measured value on the OLED.  
- Updates readings every second.

### Components Required
| Component | Quantity | Description |
|-----------|-----------|-------------|
| Arduino Board | 1 | UNO, Nano, or compatible board |
| SSD1306 OLED Display | 1 | 128×64 I2C display |
| Water Sensor | 1 | Analog water or moisture sensor |
| Jumper Wires | — | For connections |
| Breadboard | 1 | Optional for setup |

**Typical Wiring (I2C + Analog Sensor):**
| Component | Pin | Arduino |
|------------|-----|----------|
| OLED VCC | → | 5V |
| OLED GND | → | GND |
| OLED SDA | → | A4 |
| OLED SCL | → | A5 |
| Sensor Signal | → | A0 |
| Sensor VCC | → | 5V |
| Sensor GND | → | GND |

---

## Project 3: Temperature & Humidity Display

### Project Overview
This project uses a **DHT22 sensor** and an **OLED display** to monitor temperature and humidity in real time.  
It’s ideal for building a mini weather station or environmental monitor.

### Function
- Reads temperature and humidity from a DHT22 sensor.  
- Displays both readings on a 128×64 OLED screen.  
- Updates the display every 2 seconds.

### Components Required
| Component | Quantity | Description |
|-----------|-----------|-------------|
| Arduino Board | 1 | UNO, Nano, or compatible board |
| SSD1306 OLED Display | 1 | 128×64 I2C OLED |
| DHT22 Sensor | 1 | Digital temperature and humidity sensor |
| Jumper Wires | — | For wiring |
| Breadboard | 1 | Optional for easy setup |

**Typical Wiring (I2C + DHT22):**
| Component | Pin | Arduino |
|------------|-----|----------|
| OLED VCC | → | 5V |
| OLED GND | → | GND |
| OLED SDA | → | A4 |
| OLED SCL | → | A5 |
| DHT22 Signal | → | D2 |
| DHT22 VCC | → | 5V |
| DHT22 GND | → | GND |
