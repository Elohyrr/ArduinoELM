#include "rgb_lcd.h"
#include "Wire.h"
#define Led 2
#define button 6

void clignote();

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(Led, OUTPUT);

}

void loop() {
  int valeur_button = digitalRead(button);
  if(valeur_button == 0){
      clignote();
  }else{
    digitalWrite(Led,0);
  }
}

void clignote(){
  delay(2000);
  digitalWrite(Led, 1);
  delay(2000);
  digitalWrite(Led, 0);
}
