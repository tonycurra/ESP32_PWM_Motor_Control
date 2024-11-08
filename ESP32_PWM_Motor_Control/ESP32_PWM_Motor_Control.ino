// Pin definitions for motor driver control
int IN1 = 1;  // GPIO1 connected to motor driver's IN1
int IN2 = 2;  // GPIO2 connected to motor driver's IN2
int speed = 160; // PWM speed value (0-255); adjust this value to change motor speed

void setup()
{
  // Set motor control pins as outputs
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop()
{
  // Set motor speed for forward rotation using PWM
  Serial.println("Rotating Forward with PWM");
  analogWrite(IN1, speed); // Set IN1 to PWM speed to control motor speed
  analogWrite(IN2, 0);     // Set IN2 to 0 for forward rotation

  // To change motor speed, modify the 'speed' variable in the range 0-255.
}
