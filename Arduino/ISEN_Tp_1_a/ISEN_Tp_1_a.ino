/*
 * Cde TOR pour une led
 */

void setup() 
{                              // debut setup()
    pinMode(5,OUTPUT);         // Declaration broche 5 en sortie
}                              // fin setup

void loop() 
{                             // debut loop()
  digitalWrite(5,1);          // 5 V sur la broche 5
  delay(2000);                // pause 2 s
  digitalWrite(5,0);          // 0 V sur la broche 5
  delay(2000);                // pause 2 s
}                             // fin loop
