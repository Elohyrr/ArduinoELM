/*
 * Acquistion Analogique (Potentiometre) pour
 * affiche sur ecran Pc
 */

 // Variables
#define brochePotentiometre A0 // constante recevant la valeur A1, correspondant à la broche à utiliser pour le pot.
int valeurPotentiometre;      // variable qui recevra la valeur lue sur la broche A1 entre 0 et 5V

 
void setup() 
{
Serial.begin(9600);   // initilisation liaison série avec Pc (vitesse de transfert 9600 bauds)
}

void loop() 
{
  valeurPotentiometre = analogRead(brochePotentiometre);  //lecture tension broche A1
                                                          // transfert valeur vers variable valeur Poten...
  Serial.print("valeur lue sur le potentiometre : ");     // envoi d'un texte sur la liaison série
  Serial.println(valeurPotentiometre);                    // envoi d'une valeur (valeurPote..) sur la iaison série
  delay(500);
}
