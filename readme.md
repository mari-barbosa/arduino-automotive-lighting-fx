# 🏎️ Arduino Automotive Lighting FX

<div align="center">

![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![License](https://img.shields.io/badge/license-MIT-blue.svg?style=for-the-badge)

**Custom lighting system for LEGO automotive model using Arduino**

*Inspired by the iconic lighting of the Nissan Skyline GT-R R34 driven by Brian O'Conner in "2 Fast 2 Furious"*

[Features](#-features) •
[Hardware](#️-hardware) •
[Installation](#-installation) •
[Usage](#-usage) •
[Schematic](#-schematic) •
[License](#-license)

</div>

---

## 📖 Project Overview

This project implements a custom lighting system for the LEGO set 76917 (Nissan Skyline GT-R R34), recreating neon (underglow) and dynamic lighting effects inspired by car modification culture.

The system uses an Arduino Nano to control two groups of LEDs:
- **Blue LEDs**: Static underglow lighting
- **White LEDs**: Dynamic sequence simulating motion and speed

## ✨ Features

- 🔵 **Blue Underglow**: 6 blue LEDs always on to simulate neon under the car
- ⚪ **Strobing Effect**: 12 white LEDs in a sequence to create motion effect
- ⚡ **Low Power**: Optimized LED control without heavy libraries
- 🎛️ **Customizable**: Delays and sequences are easy to adjust
- 🔧 **Simple**: Clean, well-documented C++ code for Arduino

## 🛠️ Hardware

### Required Components

| Component | Quantity | Specification |
|-----------|------------|---------------|
| Arduino Nano | 1 | ATmega328P microcontroller |
| Blue LEDs | 6 | 3mm or 5mm |
| White LEDs | 12 | 3mm or 5mm |
| Resistors | 18 | 220Ω - 330Ω (depends on LEDs) |
| Breadboard | 1 | Optional for prototyping |
| Jumper Wires | ~20 | Connection wires |
| LEGO Set 76917 | 1 | Nissan Skyline GT-R R34 |
| Power Supply | 1 | 9V (battery or adapter) |

### Pinout

**Blue LEDs (always on):**
- A0, A1, A2, A3, A4, A5

**White LEDs (sequence):**
- 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13

## 📥 Installation

### Requirements

- [Arduino IDE](https://www.arduino.cc/en/software) (version 1.8.0 or newer)
- Mini-B USB cable
- Arduino Nano drivers installed

### Steps

1. **Clone the repository**
   ```bash
   git clone https://github.com/your-username/arduino-automotive-lighting-fx.git
   cd arduino-automotive-lighting-fx
   ```

2. **Open the project in the Arduino IDE**
   ```bash
   # Navigate to the folder and open the .ino file
   cd skyline
   # Open skyline.ino in the Arduino IDE
   ```

3. **Configure the board**
   - Tools → Board → Arduino Nano
   - Tools → Processor → ATmega328P (Old Bootloader)
   - Tools → Port → Select the Arduino COM port

4. **Upload the sketch**
   - Click the "Upload" button (→) or press Ctrl+U

## 🚀 Usage

After uploading the code:

1. Connect all LEDs according to the schematic
2. Power the Arduino with a 9V source or via USB
3. The system will start automatically:
   - Blue LEDs will turn on immediately
   - White LEDs will start the animation sequence

### Customization

To adjust the animation speed, edit the `delayTime` constant in the code:

```cpp
const int delayTime = 2;  // Value in milliseconds (smaller = faster)
```

## 📂 Project Structure

```
arduino-automotive-lighting-fx/
├── skyline/
│   └── skyline.ino          # Main Arduino sketch
├── schematic/               # Schematics and diagrams
├── readme.md               # This file
└── LICENSE                 # Project license
```

## 🔌 Schematic

> **Note:** Check the `schematic/` folder for detailed connection diagrams.

### Basic Diagram

```
Arduino Nano
    │
    ├─ A0 ──[ 220Ω ]── Blue LED 1 ─┐
    ├─ A1 ──[ 220Ω ]── Blue LED 2 ─┤
    ├─ A2 ──[ 220Ω ]── Blue LED 3 ─┤
    ├─ A3 ──[ 220Ω ]── Blue LED 4 ─├─── GND
    ├─ A4 ──[ 220Ω ]── Blue LED 5 ─┤
    ├─ A5 ──[ 220Ω ]── Blue LED 6 ─┘
    │
    ├─ D2  ──[ 220Ω ]── White LED 1 ─┐
    ├─ D3  ──[ 220Ω ]── White LED 2 ─┤
    ├─ ...                             ├─── GND
    └─ D13 ──[ 220Ω ]── White LED 12 ─┘
```

## 🎥 Demo

<div align="center">

![Skyline with LEDs running](assets/skyline.gif)

*Blue underglow lighting system in action on the LEGO Nissan Skyline GT-R R34*

</div>

## 🤝 Contributing

Contributions are welcome! Feel free to:

1. Fork the project
2. Create a branch for your feature (`git checkout -b feature/NewFeature`)
3. Commit your changes (`git commit -m 'Add new feature'`)
4. Push to your branch (`git push origin feature/NewFeature`)
5. Open a Pull Request

## 📝 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## 👤 Author

**Mari Barbosa**

- GitHub: [@maribarbosa](https://github.com/mari-barbosa)

## 🙏 Acknowledgements

- Inspiration: The "Fast & Furious" franchise and car modification culture
- LEGO Group for set 76917
- Arduino community for documentation and support

---

<div align="center">

**If you found this project useful, consider giving the repository a ⭐!**

Made with ❤️ and lots of speed 🏁

</div>
