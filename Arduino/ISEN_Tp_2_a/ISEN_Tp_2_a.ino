/*
 * Acquistion Inter pour
 * Cde TOR pour une led
 */

 // Variables
#define brocheInter 2   //constante stockant la valeur 2
                        //correspondra au connecteur ou raccorder l'interrupteur led
int etatInter;          //variable qui recevra la "valeur" de tension lu sur la broche interrupteur 
#define brocheLed 5
 
void setup() 
{
  pinMode(brocheLed,OUTPUT);
  pinMode(brocheInter,INPUT); // Declaration broche 2 en entrée
}

void loop() 
{
  etatInter = digitalRead(brocheInter); //lecture de la tension présente en broche 2
                                        // transfert vers la variable etatInter qui vaudra 1 si 5 V, 0 si OV.
  if (etatInter ==1)                    // si la variabble etatInter est égale à 1 (==)
  {                                     // alors
    digitalWrite(brocheLed,1);
  }
  else                                  // sinon
  {
    digitalWrite(brocheLed,0);
  }                                     // fin si
}
