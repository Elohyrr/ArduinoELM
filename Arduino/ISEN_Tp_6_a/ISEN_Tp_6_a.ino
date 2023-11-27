/*
 * Acquistion Analogique (Potentiometre) pour
 * pilotage intensité led
 */

 // Variables
#define brochePotentiometre A2
int valeurPotentiometre;
#define brocheLed 8
int valeurLed;        // variable permettant de stocker la valeur d'intensité pour la led

 
void setup() 
{
  //Initialisation liaison série avec Pc
  Serial.begin(9600);
  pinMode(brocheLed,OUTPUT);
}

void loop() 
{
  //lecture Pot..
  valeurPotentiometre = analogRead(brochePotentiometre); // valeurPotentiometre varie entre 0 et 1023
  
  //Mise à l'echelle (regle de 3)
  valeurLed =  (valeurPotentiometre/1023.0) * 255;      //transforme la valeurPot.. (0 - 1023)
                                                      // vers          valeurLed.. (0 - 255)
                                                      
  analogWrite(brocheLed, valeurLed);                  // commande de la led en mode analogique
                                                      // variation de tension (donc d'intensité) entre 0 et 5V                                                   
  // Envoi sur liaison série
  Serial.print("valeur potentiometre : ");     // envoi d'un texte sur la liaison série
  Serial.print(valeurPotentiometre);                    // envoi d'une valeur (valeurPote..) sur la iaison série
  Serial.print("\t Conversion Cde Led : ");     // envoi d'un texte sur la liaison série
  Serial.println(valeurLed);                    // envoi d'une valeur (valeurPote..) sur la iaison série
 
  
  delay(500);
}
