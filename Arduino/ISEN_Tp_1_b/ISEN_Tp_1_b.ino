/*
 * Cde TOR pour une led
 */

 // Variables
#define brocheLed  5   //"constante" stockant la valeur 5
                      //correspondra au connecteur ou raccorder la led
 
void setup() 
{                              // debut setup()
    pinMode(brocheLed,OUTPUT); // Declaration broche 5 en sortie
}                              // fin setup

void loop() 
{                             // debut loop()
  digitalWrite(brocheLed,1);  // 5 V sur la broche 5
  delay(2000);                // pause 2 s
  digitalWrite(brocheLed,0);  // 0 V sur la broche 5
  delay(2000);                // pause 2 s
}                             // fin loop
