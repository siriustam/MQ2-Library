#include <Arduino.h>

#include "MQ2.h"

int pinMQ2 = 35;
float voltInput = 3.3;
float voltRange = 4095.0;

MQ2 mq2(pinMQ2, voltInput, voltRange);

void setup() {
  Serial.begin(115200);
  pinMode(pinMQ2, INPUT);
}

void loop() {
  float mq2Ppm = mq2.readPpm();
  Serial.println(mq2Ppm);
}
