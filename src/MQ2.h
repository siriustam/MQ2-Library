#ifndef MQ2_h
#define MQ2_h

#include "Arduino.h"

#define RL 1
#define M -0.44953
#define B 1.23257
#define RO 2.70

class MQ2 {
 private:
  uint8_t analogPin;
  float v_in;
  float v_ran;

 public:
  float analogValue;
  float vrl;
  float rs;
  float ratio;
  float ppm;

  MQ2(uint8_t pin, float v_input, float v_range);
  float getPPM();
};

#endif