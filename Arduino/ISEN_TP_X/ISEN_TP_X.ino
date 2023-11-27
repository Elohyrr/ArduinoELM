#include "rgb_lcd.h"
#include "Wire.h"
#include "Servo.h"
#include "Grove_LED_Bar.h"

#define LED_ON_OFF 4
#define BUTTON_ON_OFF 6
#define INTENSITE A12


rgb_lcd monLcd;
Servo mix ;
Grove_LED_Bar bar(11, 10, 0, LED_BAR_10);
float dulait = 500;
int VALEUR_INTENSITE;


void setup() {
  Wire.begin();
  bar.begin();
  monLcd.begin(16, 2);
  mix.attach(10);
  Serial.begin(9600);
  pinMode(BUTTON_ON_OFF, INPUT);
  pinMode(LED_ON_OFF, OUTPUT);  

}

void loop() {
  int VALEUR_INTENSITE = analogRead(INTENSITE);
  int VALEUR_BUTTON = digitalRead(BUTTON_ON_OFF);
  float multiple = map(VALEUR_INTENSITE, 0, 1023, 1, 20);
  float valeurLed = map(VALEUR_INTENSITE, 0,1023,1,10);
  
  if (VALEUR_BUTTON==1){
      monLcd.print(VALEUR_INTENSITE);
      digitalWrite(LED_ON_OFF,1);
      mix.write(90);
      delay(dulait*multiple);
      mix.write(45);
      delay(dulait2);
      monLcd.clear();
    }  
  else {
    digitalWrite(LED_ON_OFF,0);
    for(int i = 10; i>=valeurLed; i--){
        bar.setLed(i, 1);
        delay(10);
    }
    for (int i = 0; i <=valeurLed - 1 ; i++){
      bar.setLed(i, 0);
      delay(10);
    }
  }
}