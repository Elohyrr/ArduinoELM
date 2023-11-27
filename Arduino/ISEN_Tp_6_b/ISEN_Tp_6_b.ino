/*
 * Acquistion Analogique (Potentiometre) pour
 * pilotage intensité led
 * Affiche sur écran Pc
 */

 // Variables
#define brochePotentiometre A2
int valeurPotentiometre;
#define brocheLed 8
int valeurLed;  // variable permettant de stocker la valeur d'intensité pour la led

 
void setup() 
{
  //Initialisation liaison série avec Pc
  Serial.begin(9600);
  pinMode(brocheLed,OUTPUT);
}

void loop() 
{
  //lecture Pot..
  valeurPotentiometre = analogRead(brochePotentiometre);
  //mise à l'echelle
  valeurLed = map(valeurPotentiometre,0,1023,0,255);  // la fonction map() réalise une mise à l'échelle
                                                      //transforme la valeurPot.. (0 - 1023)
                                                      // vers         valeurLed.. (0 - 255)
  analogWrite(brocheLed, valeurLed);                  // commande de la led en mode analogique
                                                      // variation de tension (donc d'intensité) entre 0 et 5V                                                   
  // Affichage a l'ecran
  Serial.print("valeur potentiometre : ");
  Serial.print(valeurPotentiometre);
  Serial.print("\t Conversion Cde led: ");
  Serial.println(valeurLed);
  
  delay(500);
}
