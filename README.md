# 🔥 Fire & Gas Safety System  
### Arduino-Based Smart Air Conditioner

<p align="center">
  <img src="https://img.shields.io/badge/Arduino-UNO-blue?style=for-the-badge&logo=arduino">
  <img src="https://img.shields.io/badge/Embedded-Systems-green?style=for-the-badge">
  <img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge">
</p>

---

## 📌 Overview
This project presents a **Smart Air Conditioner Safety System** based on **Arduino UNO**.  
It detects **gas leakage** and **high temperature** and reacts automatically to improve safety by controlling airflow and providing instant alerts.

The system is designed for **homes, kitchens, companies, and laboratories**.

---

## 🎯 Problem Statement
Gas leakage and fire hazards are serious risks that require **fast and automatic response**.  
Manual detection may cause delays that lead to accidents or damage.

---

## ⚙️ System Functionality
The system works in real time as follows:

- Continuously reads data from sensors
- Automatically reacts based on detected danger:
  - 🔥 **Fire / High Temperature** → Blows air outward
  - ⚠️ **Gas Leakage** → Pulls air inward
- Activates **LED and buzzer** for instant alerts

---

## 🧠 How It Works
1. Sensors send analog readings to the Arduino.
2. Arduino compares readings with predefined thresholds.
3. The motor direction and speed are controlled using the L298N motor driver.
4. Visual and sound alerts notify users immediately.

---

## 🧩 Hardware Components
| Component | Description |
|---------|------------|
| Arduino UNO | Main controller |
| MQ-2 Gas Sensor | Detects gas leakage |
| Flame / Temperature Sensor | Detects fire or high temperature |
| L298N Motor Driver | Controls motor direction & speed |
| DC Motor | Controls airflow |
| LED + 220Ω | Visual alert |
| Buzzer | Sound alert |

---

## 🔌 Pin Configuration

Gas Sensor (AO)        → A0
Flame Sensor (AO)      → A1
Motor Driver IN3       → Pin 5
Motor Driver IN4       → Pin 6
Motor Driver ENB (PWM) → Pin 9
LED                    → Pin 13
Buzzer                 → Pin 12
Common Ground          → All components

---

💻 Software & Tools
Arduino IDE

C/C++ for Arduino

AutoCAD 2D (Design)

Laser Cutting Machine (Prototype)

---

🚀 Future Enhancements
Add a cooling sensor for smart car air conditioning safety

Mobile or email notifications for gas/fire alerts

Integration with Alexa or smart home systems

---

👥 Teamwork
This project was developed as a team project, enhancing:

Collaboration skills

Task distribution

Technical communication

Presentation & PowerPoint skills
---
✨ Author
Aya Eslam
Faculty of Computers & Information


