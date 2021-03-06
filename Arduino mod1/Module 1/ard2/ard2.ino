int valeurPrecedente = 0;
long tempsPrecedent = 0;

void setup() {
  Serial.begin(9600);
}


void loop() {

  int valeurActuelle, valeurSeuil;
  long tempsDetection;

  valeurActuelle = analogRead(0);
  valeurSeuil = 650;

  if (valeurActuelle > valeurSeuil) {  
    if (valeurPrecedente <= valeurSeuil) {  
      tempsDetection = millis();
      if (tempsDetection > (tempsPrecedent + 200)){  
        Serial.println( (1000.0 * 60.0) / (tempsDetection - tempsPrecedent),0);
        tempsPrecedent = tempsDetection;
      }
    }
  }

  valeurPrecedente = valeurActuelle;

}
