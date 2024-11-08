# ESP32 PWM Motor Control

This project demonstrates how to control the speed of a DC motor with an ESP32-S3 microcontroller using PWM. The code allows for single-direction motor control, and the motor speed can be adjusted by modifying the `speed` variable in the code.

## Hardware Requirements
- ESP32-S3 microcontroller
- DC motor
- Motor driver (e.g., L298N or similar)
- Jumper wires

## Circuit Setup
1. Connect GPIO1 (IN1) on the ESP32-S3 to the motor driver's IN1 pin.
2. Connect GPIO2 (IN2) on the ESP32-S3 to the motor driver's IN2 pin.
3. Connect the motor driver’s `+` to the ESP32-S3's `5V` pin and `-` to `GND`.
4. Attach the DC motor to the output terminals of the motor driver.

## Code Explanation
- **`int speed = 160;`**: This sets the PWM duty cycle value for motor speed. Adjust this value between `0` and `255` to change the motor's speed, where `0` is off and `255` is full speed.
- **Motor Control**: The motor runs forward by setting `IN1` to the PWM speed value and `IN2` to `0` (LOW).
  
### Example Usage
1. Clone or download this repository.
2. Open `ESP32_PWM_Motor_Control.ino` in the Arduino IDE.
3. Upload the code to your ESP32-S3.
4. Open the Serial Monitor to observe the debug messages.

The motor will run forward at the specified speed for 10 seconds. To adjust the speed, modify the `speed` variable in the code and re-upload.

## License
This project is open-source and free to use for educational and personal projects.
