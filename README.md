# SmartHomeOS

> Open-source smart home infrastructure platform built using ESP32, MQTT, Docker, and modern web technologies.

---

# Overview

SmartHomeOS is an open-source smart home engineering project focused on building a complete self-hosted home automation ecosystem.

The project combines:

- embedded systems
- IoT communication
- smart relay control
- automation architecture
- hardware design
- firmware development
- self-hosted infrastructure

The goal is to create a scalable smart home platform that includes both hardware and software components.

---

# Planned Features

- ESP32-based smart switch control
- Relay-based appliance management
- MQTT communication
- Real-time device monitoring
- Web dashboard
- Dockerized backend services
- Sensor integration
- Automation engine
- Mobile application
- Energy monitoring
- Self-hosted deployment

---

# Repository Structure

```text
SmartHomeOS/
│
├── versions/
│   ├── v1/
│   ├── v2/
│   └── v3/
│
├── README.md
├── ROADMAP.md
└── LICENSE
```

Each version represents a standalone engineering stage of the SmartHomeOS project.

This structure preserves:

- firmware evolution
- hardware evolution
- architecture changes
- simulation improvements

---

# Current Version

## V1 - ESP32 GPIO Simulation

V1 focuses on:

- ESP32 firmware setup
- GPIO control
- LED-based appliance simulation
- Wokwi integration
- PlatformIO workflow

The LEDs simulate real home appliances before integrating physical relay modules.

---

# V1 Simulation Preview

![ESP32 Simulation](versions/v1/assets/screenshots/esp32-led-simulation-v1.png)

---

# Technologies Used

| Technology        | Purpose                   |
| ----------------- | ------------------------- |
| ESP32             | Main microcontroller      |
| PlatformIO        | Embedded development      |
| Wokwi             | Circuit simulation        |
| Arduino Framework | Firmware framework        |
| MQTT              | IoT communication         |
| Docker            | Infrastructure deployment |

---

# Development Roadmap

| Version | Goal                        |
| ------- | --------------------------- |
| V1      | ESP32 GPIO simulation       |
| V2      | Push button + relay control |
| V3      | MQTT communication          |
| V4      | Backend API                 |
| V5      | Web dashboard               |
| V6      | Automation engine           |
| V7      | Sensor integration          |

---

# Status

🚧 Currently under active development

Current focus:

- embedded firmware
- simulation architecture
- relay control system
- smart appliance management

---

# License

MIT License
