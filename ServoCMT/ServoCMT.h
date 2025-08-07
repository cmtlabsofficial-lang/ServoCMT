#ifndef ServoCMT_h
#define ServoCMT_h

#include <Arduino.h>

class ServoCMT {
  public:
    void setup(int pin, int canal);
    void write(int canal, int angulo);
  private:
    int frecuencia = 50;
    int resolucion = 16;
    int minUS = 450;
    int maxUS = 2550;
};

#endif
