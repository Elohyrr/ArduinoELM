#include "rgb_lcd.h"
#include "Wire.h"
#define capture_distance A0
float distance ;
rgb_lcd monLcd;

void setup() {
  Wire.begin();
  monLcd.begin(16, 2);
  pinMode(capture_distance,OUTPUT);
  pinMode(distance,INPUT);
}

void loop() {



  delay(100);
  // efface l'ecran
  monLcd.clear();
}
