

# 🌌 Solar System Simulation using C++ and graphics.h

This is a simple solar system simulation built using C++ and the `graphics.h` library. The simulation shows the sun and planets orbiting around it, with basic animations and visuals, including a comet and stars.

## 🖥️ Features

- Simulated orbits for 8 planets around the sun
- Rotational animation
- Planet names and colored visuals
- Star-like sparkle effects
- Saturn rings and a moving comet 


## 🧰 Requirements

This project uses **graphics.h**, which is not supported in modern compilers. Use either of the following setups:

### 🧪 Option 1: Use Turbo C++ (Old method - Windows only)

1. Install **Turbo C++** IDE (from [TurboC++ download](https://turbocpp.blogspot.com)).
2. Copy the code into a new `.cpp` file.
3. Run it directly in the Turbo C++ IDE.

### ⚙️ Option 2: Use `graphics.h` with Code::Blocks or Dev C++ (modern workaround)

1. Download [WinBGIm graphics library](http://winbgim.codecutter.org/).
2. Install **Code::Blocks** or **Dev C++**.
3. Copy `graphics.h`, `winbgim.h`, and `libbgi.a` to appropriate directories:
   - `graphics.h` → `C:\Program Files (x86)\CodeBlocks\MinGW\include`
   - `libbgi.a` → `C:\Program Files (x86)\CodeBlocks\MinGW\lib`

4. Link these libraries in your project settings:
```

-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

````

5. Paste the code into a `.cpp` file and build/run it.

---

## 🚀 How to Run

1. Clone this repo:
```bash
git clone https://github.com/../solar-system-simulation.git
cd solar-system-simulation
````

2. Open the project in your chosen IDE (Turbo C++, Code::Blocks, or Dev C++).
3. Build and run the program.

---

## 📝 Code Overview

The animation simulates each planet’s orbit using trigonometric calculations (`cos` and `sin`), and increases the `angle` over time to animate rotation.

---

## 📂 File Structure

```
solar-system-simulation/
│
├── main.cpp              # Main simulation code
├── graphics.h            # Graphics header file (for manual setup)
├── winbgim.h             # WinBGIm support file
├── libbgi.a              # Graphics static library
└── README.md             # This file
```

---

## 📜 License

This project is licensed under the MIT License.

---

## 🙌 Credits

* BGI Graphics for Windows (WinBGIm)
* Original `graphics.h` by Borland
