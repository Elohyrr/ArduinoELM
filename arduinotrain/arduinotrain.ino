#include "rgb_lcd.h"
#include "Wire.h"
#define Led 2
#define button 6
long temps = 0;
int valeurled = 0;

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
  if((millis()-temps ) > 1000){
    digitalWrite(Led, !digitalRead(Led));
    temps = millis();    
  }
}

//clignotement  
