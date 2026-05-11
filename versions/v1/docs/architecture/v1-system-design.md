# SmartHomeOS V1 System Design

## Objective

Build a smart relay control system using ESP32 for controlling home electrical appliances.

---

## Core Components

### ESP32

Main controller responsible for:

- WiFi connection
- MQTT communication
- Relay control

---

### Relay Module

Used to switch electrical appliances ON/OFF.

Initial version uses:

- 4-channel relay module

---

### MQTT Broker

Handles communication between:

- dashboard
- backend
- ESP32 devices

---

## Initial Appliance Mapping

| GPIO | Appliance |
| ---- | --------- |
| 23   | Light     |
| 22   | Fan       |
| 21   | Plug      |
| 19   | AC        |

---

## Communication Flow

```text
Dashboard
    ↓
Backend
    ↓
MQTT Broker
    ↓
ESP32
    ↓
Relay Module
    ↓
Appliance
```

---

## Initial Goals

- Connect ESP32 to WiFi
- Connect ESP32 to MQTT
- Toggle relay using MQTT messages
- Publish device status

---

## Future Expansion

- Sensors
- Automation rules
- Energy monitoring
- Mobile application
- Voice assistant support
