#include <Arduino.h>
#include <HC12config.h>
hc12Config hc12(&Serial2, GPIO_NUM_5);

void setup() {
  Serial.begin(115200);
  Serial2.begin(9600);
  hc12.set_defaults();
}

void loop() {
  Serial2.println("Hello World!");
  delay(10000);
}