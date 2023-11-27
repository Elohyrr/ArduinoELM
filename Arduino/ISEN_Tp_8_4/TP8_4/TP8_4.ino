 /*
  Bs - Micro - Tp 6 Version Robot
  Le 07/10/17 Olex
  
 Entrée sortie I2C, liaison console
 */

// ajout librairie utilisation LCD
#include "rgb_lcd.h"
// ajout librairie utilisation I2C pour connexion LCD
#include "Wire.h"
#define brochePotentiometre A2
float valeurPotentiometre;
float valeurNoeud;
// création objet LCD
rgb_lcd monLcd;

void setup() {

   // Initialisation I2C pour utilisation LCD
  Wire.begin();
    
   // declare utilisation d'un LCD 2 lignes 16 colonnes
  monLcd.begin(16, 2);
 }

void loop() {
  valeurPotentiometre = analogRead(brochePotentiometre);
  valeurNoeud = (valeurPotentiometre /1023) * 30 - 4;
  // configure couleur fond d'écran
  // ecrit un message sur ecran LCD.
  monLcd.setCursor(4, 0);
  monLcd.print("VITESSE");
  monLcd.setCursor(5, 1);
  monLcd.print(valeurNoeud);
    if (valeurNoeud<=0) {
      monLcd.setRGB(0,255,0);
  } else {
      monLcd.setRGB(255, 255, 0);
  }
  delay(100);
  // efface l'ecran
  monLcd.clear();

}
