/*
 * Acquistion Inter pour
 * Cde TOR pour 4 leds
 */

 // Variables
#define brocheInter 8
int etatInter;
#define brocheLed1 4
#define brocheLed2 5
#define brocheLed3 6
#define brocheLed4 7
int tempo = 100;    // variable recevant la valeur 100, sera utilisé pour la valeur de la pause.

void setup() 
{
pinMode(brocheLed1,OUTPUT);
pinMode(brocheLed2,OUTPUT);
pinMode(brocheLed3,OUTPUT);
pinMode(brocheLed4,OUTPUT);
pinMode(brocheInter,INPUT);
}

void loop() 
{
  etatInter = digitalRead(brocheInter);
  if (etatInter ==1)
  {
    digitalWrite(brocheLed4,0);
    digitalWrite(brocheLed1,1);
    delay(tempo);
    
    digitalWrite(brocheLed1,0);
    digitalWrite(brocheLed2,1);
    delay(tempo);
    
    digitalWrite(brocheLed2,0);
    digitalWrite(brocheLed3,1);
    delay(tempo);
    
    digitalWrite(brocheLed3,0);
    digitalWrite(brocheLed4,1);
    delay(tempo);
    
  }
  else
  {
    digitalWrite(brocheLed1,0);
    digitalWrite(brocheLed4,1);
    delay(tempo);
    
    digitalWrite(brocheLed4,0);
    digitalWrite(brocheLed3,1);
    delay(tempo);
    
    digitalWrite(brocheLed3,0);
    digitalWrite(brocheLed2,1);
    delay(tempo);
    
    digitalWrite(brocheLed2,0);
    digitalWrite(brocheLed1,1);
    delay(tempo);
    
  }
}
