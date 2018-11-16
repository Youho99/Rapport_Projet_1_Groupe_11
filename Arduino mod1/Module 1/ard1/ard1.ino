unsigned long time;


void setup() {

  Serial.begin(9600);

  Serial.println("Initialisation");

  time = millis();


  while((millis()-time)<1000){
    analogRead(0);
  }

  time = millis();


  while((millis()-time)< 60000){
    Serial.println(analogRead(0));
  }

}


void loop() {


}
