#include "rgb_lcd.h"
#include "Wire.h"
#define Led 2
#define button 6

void clignote();
void attendreRelachementBouton();

unsigned long previousMillis = 0;
const long interval = 2000;

void setup() {
  pinMode(button, INPUT);
  pinMode(Led, OUTPUT);
}

void loop() {
  int valeur_button = digitalRead(button);

  if (valeur_button == LOW) {
    clignote();
    attendreRelachementBouton();
  } else {
    digitalWrite(Led, LOW);
  }
}

void clignote() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    digitalWrite(Led, 1);
    delay(200);
    digitalWrite(Led, 0);
  }
}

void attendreRelachementBouton() {
  // Attendre que le bouton soit relâché
  while (digitalRead(button) == LOW) {
    delay(50);
  }
}
