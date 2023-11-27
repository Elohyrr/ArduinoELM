#define capteurLuminosite A1
#define LED_ 12
int seuilPenombre = 400;    

void setup() {
  Serial.begin(9600);
  pinMode(capteurLuminosite, INPUT);
  pinMode(LED_, OUTPUT);  
}

void loop() {
  int valeurLuminosite = analogRead(capteurLuminosite);

  if (valeurLuminosite < seuilPenombre) {
    digitalWrite(LED_, HIGH); 
  } else {
    digitalWrite(LED_, LOW); 
  }
  Serial.print("valeur luminosite : ");    
  Serial.println(valeurLuminosite);     
  delay(500);
}