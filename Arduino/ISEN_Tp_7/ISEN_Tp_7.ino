 /*
  Bs - Micro - Tp 6 Version Robot
  Le 07/10/17 Olex
  
 Entrée sortie I2C, liaison console
 */

// ajout librairie utilisation LCD
#include "rgb_lcd.h"
// ajout librairie utilisation I2C pour connexion LCD
#include "Wire.h"

// création objet LCD
rgb_lcd monLcd;

void setup() {

   // Initialisation I2C pour utilisation LCD
  Wire.begin();
    
   // declare utilisation d'un LCD 2 lignes 16 colonnes
  monLcd.begin(16, 2);
 }

void loop() {
  // configure couleur fond d'écran
  monLcd.setRGB(255,255,255); // écran avec fond blanc
  // ecrit un message sur ecran LCD.
  monLcd.print("Bonjour");
  delay(1000);
  // efface l'ecran
  monLcd.clear();
  
}
