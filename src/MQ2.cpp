#include "MQ2.h"

MQ2::MQ2(uint8_t pin, float v_input, float v_range) {
  analogPin = pin;
  v_in = v_input;
  v_ran = v_range;
}

float MQ2::readPpm() {
  vrl = analogRead(analogPin) * (v_in / v_ran);
  rs = ((v_in * RL) / vrl) - RL;
  ratio = rs / RO;
  ppm = pow(10, ((log10(ratio) - B) / M));
  return ppm;
}
