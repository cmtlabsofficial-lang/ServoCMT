# ServoCMT

A simplified library for controlling servos on ESP32 using angle-based commands.

## Features

- Angle control (0–180°)
- Custom pulse range (450–2550 µs)
- Supports multiple servos
- Ideal for recycled hardware and maker projects

## Basic Example

```cpp
#include <ServoCMT.h>

ServoCMT servo;

void setup() {
  servo.setup(23, 0);  // GPIO 23, PWM channel 0
}

void loop() {
  servo.write(0, 90);  // Move to 90° position
  delay(1000);
}
