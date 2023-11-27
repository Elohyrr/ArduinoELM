/*
 * Sortie Analogique pour
 * pilotage intensité led
 */

 // Variables
#define brocheLed 8

void setup() 
{
  pinMode(brocheLed,OUTPUT);
}

void loop() 
{
    analogWrite(brocheLed, 50);    // commande de la led en mode analogique   
                                          
}
