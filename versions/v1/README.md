# SmartHomeOS - V1

## Overview

V1 is the first prototype of SmartHomeOS.

This version focuses on building the foundation of the smart home system using:

- ESP32
- GPIO control
- LED-based appliance simulation
- Wokwi simulation
- PlatformIO development workflow

The LEDs in this version simulate real home appliances before integrating actual relay modules and AC devices.

---

# V1 Goals

The purpose of V1 is to:

- verify ESP32 GPIO functionality
- create the firmware architecture
- establish simulation workflow
- test virtual appliance control
- prepare the project for future relay integration

---

# Technologies Used

| Technology        | Purpose                          |
| ----------------- | -------------------------------- |
| ESP32             | Main microcontroller             |
| PlatformIO        | Embedded development environment |
| Wokwi             | ESP32 circuit simulation         |
| Arduino Framework | Firmware development             |

---

# Simulation Architecture

```text
ESP32 GPIO
    ↓
Resistor
    ↓
LED
```

Each LED represents a virtual appliance.

---

# GPIO Mapping

| GPIO Pin | Virtual Appliance |
| -------- | ----------------- |
| GPIO 18  | LED 1             |
| GPIO 5   | LED 2             |
| GPIO 4   | LED 3             |
| GPIO 2   | LED 4             |

---

# Project Structure

```text
v1/
│
├── firmware/
│   └── esp32-relay-controller/
│
├── hardware/
│   ├── wiring/
│   ├── schematics/
│   └── components/
│
├── docs/
│   ├── architecture/
│   └── setup/
│
├── assets/
│   ├── screenshots/
│   └── diagrams/
│
└── README.md
```

---

# Firmware

The firmware controls:

- GPIO output
- LED blinking logic
- virtual appliance simulation

The firmware project uses:

- PlatformIO
- Arduino framework
- ESP32 Dev Module

---

# Hardware

V1 currently uses:

- ESP32 DevKit V1
- LEDs
- 220Ω resistors

No relay modules are used in this version.

LEDs are used as safe virtual replacements for real electrical appliances.

---

# Simulation

The ESP32 simulation was built using Wokwi.

Simulation includes:

- ESP32 board
- 4 LEDs
- 4 resistors
- GPIO control logic

---

# Screenshots

## ESP32 LED Simulation

![ESP32 Simulation](assets/screenshots/esp32-led-simulation-v1.png)

---

# What Was Achieved In V1

- Created SmartHomeOS repository structure
- Configured PlatformIO environment
- Configured Wokwi simulation
- Implemented GPIO output control
- Built first embedded system simulation
- Established version-based project architecture

---

# Future Upgrades

Future versions will include:

- push button controls
- relay modules
- MQTT communication
- web dashboard
- automation engine
- sensor integration
- mobile application

---

# Status

V1 is currently focused on:

- simulation
- firmware architecture
- GPIO validation
- development workflow setup
