#include "ServoCMT.h"

void ServoCMT::setup(int pin, int canal) {
  ledcSetup(canal, frecuencia, resolucion);
  ledcAttachPin(pin, canal);
}

void ServoCMT::write(int canal, int angulo) {
  angulo = constrain(angulo, 0, 180);
  int us = map(angulo, 0, 180, minUS, maxUS);
  int duty = (us * ((1 << resolucion) - 1)) / 20000;
  ledcWrite(canal, duty);
}
