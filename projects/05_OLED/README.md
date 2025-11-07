# Arduino OLED Display Projects

This repository contains two example projects using the **Adafruit SSD1306 OLED display**.  
They demonstrate how to initialize the OLED display and show text or sensor data on screen.

---

## Table of Contents
1. [Required Libraries](#required-libraries)  
2. [OLED Initialization Methods](#oled-initialization-methods)  
3. [Project 1: Hello OLED](#project-1-hello-oled)  
4. [Project 2: Water Sensor Display](#project-2-water-sensor-display)  
5. [License](#license)  
6. [Author](#author)

---

## Required Libraries

Both projects use the **Adafruit OLED libraries**, which can be installed through the Arduino Library Manager.

1. **Adafruit SSD1306**  
   - Handles communication with the OLED hardware.  
   - Install via:  
     `Sketch → Include Library → Manage Libraries → Search "Adafruit SSD1306" → Install`

2. **Adafruit GFX**  
   - Provides graphics primitives such as text, lines, and shapes.  
   - Required for text display functions like `setCursor()` and `println()`.  
   - Install via:  
     `Sketch → Include Library → Manage Libraries → Search "Adafruit GFX Library" → Install`

3. **Wire (default)**  
   - Built-in I2C communication library, included with Arduino IDE.  

---

## OLED Initialization Methods

There are **two main methods** to initialize the OLED display object depending on your coding style or library version:

| Method | Code Example | Description |
|---------|--------------|-------------|
| **1. Separate Definition (Flexible)** | `Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);` | Defines screen width/height as constants (`SCREEN_WIDTH = 128`, `SCREEN_HEIGHT = 64`) and passes them into the constructor. This method is flexible and makes the code easier to adjust for different screen sizes. |
| **2. Direct Constructor Definition (Simpler)** | `Adafruit_SSD1306 display(128, 64, &Wire, -1);` | Hardcodes width and height directly in the constructor. This version is concise and works well when your display size is fixed. |

**In short:**  
- The first method is **clearer and adaptable** for various OLED sizes.  
- The second is **simpler and compact**, suitable for small projects or demos.

---

## Project 1: Hello OLED

### Project Overview
This project demonstrates how to initialize and display text on an **SSD1306 OLED display**.  
When the Arduino starts, it shows the text **"Hello"** on the screen.

### Function
- Initializes the OLED display using I2C communication.
- Displays the word “Hello” in large white text on a black background.
- Demonstrates basic OLED text display functions such as `setTextSize()`, `setTextColor()`, and `setCursor()`.

### Components Required
| Component | Quantity | Description |
|-----------|-----------|-------------|
| Arduino Board | 1 | Any compatible board (UNO, Nano, etc.) |
| SSD1306 OLED Display | 1 | 0.96" 128×64 I2C OLED display |
| Jumper Wires | — | For I2C connections |
| Breadboard | 1 | Optional for prototyping |

**Typical wiring (I2C):**
| OLED Pin | Arduino Pin |
|-----------|-------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

---

## Project 2: Water Sensor Display

### Project Overview
This project reads analog values from a **water sensor** and displays the result on the OLED screen.  
It provides a live reading that updates every second.

### Function
- Reads analog input from a water sensor connected to pin A0.  
- Displays “Water:” followed by the sensor value on the OLED.  
- Refreshes the display every second (`delay(1000)`).

### Components Required
| Component | Quantity | Description |
|-----------|-----------|-------------|
| Arduino Board | 1 | Any compatible board |
| SSD1306 OLED Display | 1 | 128×64 I2C display |
| Water Sensor | 1 | Analog water or moisture sensor |
| Jumper Wires | — | For connections |
| Breadboard | 1 | Optional for assembly |

**Typical wiring (I2C + analog sensor):**
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

## License
This project is released under the **MIT License** — free for personal and educational use.

---

## Author
Created by **Veronica Tang**  
Simple, visual, and educational OLED display projects for Arduino.
