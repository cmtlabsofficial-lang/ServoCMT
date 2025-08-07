#include <ServoCMT.h>

ServoCMT servo;

void setup() {
  servo.setup(23, 0);
}

void loop() {
  for (int angulo = 0; angulo <= 180; angulo += 10) {
    servo.write(0, angulo);
    delay(500);
  }
}
