# ESP32 DevKitC V4 Project

This project includes both a simulator and actual hardware code for the ESP32 DevKitC V4.

## Project Structure

- `src/simulator.js`: Node.js-based simulator
- `src/arduino/esp32.ino`: Arduino code for actual hardware deployment

## Hardware Setup

1. Connect ESP32 DevKitC V4 to your computer
2. Install Arduino IDE
3. Install ESP32 board support
4. Upload the `esp32.ino` code

## Running the Simulator

```bash
npm install
npm run dev
```

## Features

- LED blinking demonstration
- Temperature sensor simulation
- Serial communication