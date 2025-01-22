# Adina - Microsumo Robot

![pic4](./media/pic4.gif)  
The robot with orange wheels.

## Project Overview 🤖

The Adina Microsumo Robot is a custom-built, compact robot designed for competitive micro sumo events. Equipped with 4 sensors (3 opponent sensors, 1 line sensor) and 2 gear motors, it offers precise autonomous navigation and optimal performance in robot battles.

Designed and built entirely by me, the Adina adheres to official micro sumo robot rules with its under 100 grams weight and under 5 cm dimensions. The robot is powered by an Arduino-based XMotion Micro Controller, which allows for programming and further customization, such as adding extra modules like Bluetooth or a start module.

This robot combines functionality with creativity, providing both a competitive edge and a learning experience in robotics.


## Components 🛠️

- XMotion Micro Robot Controller Board

The heart of the robot, featuring an Atmega 32u4 MCU and a 1A x 2 Dual motor driver. It operates between 7V to 15V and provides plenty of I/O for sensors and modules. The controller is programmable via Arduino software through a micro USB cable. It includes 2 user buttons for start tactics and 2 LEDs for mode indication during code development.

- JS40F Infrared Opponent Sensors

The robot uses 3 JS40F infrared sensors, known for their 60cm detection range and wide sensing angle, allowing the robot to detect opponents from the front, left, and right with no dead zones.

- ML1 Line, Edge Sensor

This analog output sensor detects the white line at the edge of the dohyo (wrestling area) to keep the robot within the boundaries during matches.

- DC Micro Gear Motors

Equipped with high-torque 6V gear motors overvolted up to 12V, these motors provide the robot with enough power to push opponents with ease.

- Body Parts

The body is made from 3D printed engineering plastic, designed for easy assembly and disassembly with just 4 M2 screws.

- Micro Sumo Robot's Blade

A 10mm wide, 0.3mm thick double-sharpened blade is used to engage opponents. It is attached with double-sided tape for easy replacement, and for safety, it is recommended not to attach the blade during testing.

- Super Grip & Light Silicone Wheels

These lightweight silicone wheels provide maximum traction with minimal inertia. After each match, it’s recommended to clean them with IPA alcohol-based cleaner for improved adhesion.


## Usage 🎮

1. **Startup**: The robot waits for a start trigger, either by pressing a button or receiving a start signal from a remote control.

2. **Initialization**: Once the start signal is received, the robot waits for 5 seconds while 2 user LEDs blink on the XMotion Micro.

3. **Movement**: The robot turns right or left based on the direction selected via the remote control (2 directions available).

4. **Dohyo Boundaries**: The robot actively monitors the line sensor to avoid falling off the dohyo.

5. **Opponent Detection**: The robot checks the opponent sensors for nearby opponents.

6. **Sensor-based Turning**: If no sensors detect an object, the robot remembers the last sensor that detected something and turns in the same direction. Alternatively, a custom routine can be programmed for more complex movements.

## Best Time Achievement 🏆

Adina ranked in the **top16 out of 100 global participants** at Robochallenge.
 
## Media 📸
