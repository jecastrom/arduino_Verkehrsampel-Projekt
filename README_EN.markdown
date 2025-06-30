# Arduino Traffic Light Project

## Description
This project simulates a **traffic light** for cars and a **pedestrian crossing** with an Arduino Uno. It includes three lights for cars (red, yellow, green) and two lights for pedestrians (red, green). A button starts the pedestrian cycle.

## Components
- **Arduino Uno**: The main device.
- **LEDs**: 
  - Red (cars): Pin 9
  - Yellow (cars): Pin 4
  - Green (cars): Pin 7
  - Red (pedestrians): Pin 5
  - Green (pedestrians): Pin 6
  - Each LED has a **330-ohm resistor** (to protect the LEDs).
- **Button**: A four-leg tactile switch on Pin 2 with a **10k-ohm resistor**.
- **Breadboard and wires**: To connect the components.

## How It Works
- **Default state**: 
  - Car light is **green** (Pin 7).
  - Pedestrian light is **red** (Pin 5).
- When the **button** (Pin 2) is pressed:
  1. Wait **5 seconds** (delay).
  2. Car light switches to **yellow** (Pin 4) for 3 seconds.
  3. Car light turns **red** (Pin 9), waits 5 seconds.
  4. Pedestrian light turns **green** (Pin 6) for 15 seconds.
  5. Pedestrian light turns **red** (Pin 5).
  6. Car light stays **red** for 10 seconds.
  7. Car light switches to **yellow** (Pin 4) for 3 seconds.
  8. Car light turns **green**, back to the default state.
- The cycle only starts when the button is pressed.

## Wiring
- **LEDs**: Each LED has a **330-ohm resistor** and is connected to ground (GND).
- **Button**: 
  - Top-left leg to Pin 2.
  - Bottom-right leg to 5V.
  - **10k-ohm resistor** from Pin 2 to ground (GND).
- All connections are made via a breadboard.

## Why Resistors?
- **330-ohm resistor for LEDs**: The resistor limits current to protect the LEDs from burning out.
- **10k-ohm resistor for button**: The resistor keeps Pin 2 at LOW (0V) when the button is not pressed, ensuring a stable signal and preventing errors (floating signal).

## Code
The code is in the file `traffic_light_with_pedestrian.ino`. It uses `digitalWrite()` for LEDs and `digitalRead()` for the button. Delays are in milliseconds (e.g., 5000 = 5 seconds).

## Installation
1. Load the code into the Arduino IDE (version 2.3.6 or higher).
2. Connect the Arduino Uno via USB.
3. Select **Tools > Board > Arduino Uno** and the correct port in the menu.
4. Upload the code.
5. Test the button to start the pedestrian cycle.

## Notes
- Ensure the LEDs and button are correctly wired.
- Press **Ctrl + Space** in the Arduino IDE for autocomplete.
- This project is part of a learning course (e.g., Duolingo or ELEGOO Kit).