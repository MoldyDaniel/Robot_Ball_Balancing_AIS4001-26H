#include <Arduino.h>
//#include <Pixy2SPI_SS.h>
#include "Pixy2.h"

Pixy2 pixy;

void setup() {
    Serial.begin(115200);
    delay(2000);

    Serial.println("Initializing Pixy2...");

    int8_t result = pixy.init();

    Serial.print("Pixy init result: ");
    Serial.println(result);
}

void loop() {
    Serial.println("Teensy lever!");
    delay(1000);
}