/*
 * Acquistion Inter pour
 * Cde TOR pour une led
 */

 // Variables
#define titi 2   //constante stockant la valeur 2
                  //correspondra au connecteur ou raccorder l'interrupteur
int toto;         //variable qui recevra la "valeur" de tension lu sur la broche interrupteur 
#define tata 5
 
void setup() 
{
  pinMode(tata,OUTPUT);
  pinMode(titi,INPUT); 
}

void loop() 
{
  toto = digitalRead(titi);   //lecture de la tension présente en broche 2
                              // transfert vers la variable toto qui vaudra 1 si 5 V, 0 si OV.
  if (toto ==1)                    // si la variable toto est égale à 1 (==)
  {                                     // alors
    digitalWrite(tata,1);
  }
  else                                  // sinon
  {
    digitalWrite(tata,0);
  }                                     // fin si
}
