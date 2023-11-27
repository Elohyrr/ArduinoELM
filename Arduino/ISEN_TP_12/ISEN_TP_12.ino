#include "rgb_lcd.h"
#include "Wire.h"

#define Led_clignote  2
#define button 6 

void setup() {

  pinMode(Led_clignote,OUTPUT);
  pinMode(button,INPUT);

}



void loop() {
  
  digitalWrite(Led_clignote,1);
  delay(200);              
  digitalWrite(Led_clignote,0);
  delay(200); 
}
