#include "param.h"
int pinLed[10]={1,2,3,4,5,6,7,8,9,10};
int u=0;


void setup() {
 for (int j=0;j<10;j++){
    pinMode(pinLed[j], OUTPUT);
    }
}

void all(){
  for (int i=0;i<10;i++){
  digitalWrite(pinLed[i], HIGH);
  }
  delay(ON);
  for (int i=0;i<10;i++){
  digitalWrite(pinLed[i], LOW);
  }
  delay(OFF);
}

void linear(){
    if (u%2 == 0){
      digitalWrite(pinLed[0], HIGH);
      digitalWrite(pinLed[2], HIGH);
      digitalWrite(pinLed[4], HIGH);
      digitalWrite(pinLed[6], HIGH);
      digitalWrite(pinLed[8], HIGH);
      delay(ON);
      digitalWrite(pinLed[0], LOW);
      digitalWrite(pinLed[2], LOW);
      digitalWrite(pinLed[4], LOW);
      digitalWrite(pinLed[6], LOW);
      digitalWrite(pinLed[8], LOW);
      delay(OFF);
    }else{
      digitalWrite(pinLed[1], HIGH);
      digitalWrite(pinLed[3], HIGH);
      digitalWrite(pinLed[5], HIGH);
      digitalWrite(pinLed[7], HIGH);
      digitalWrite(pinLed[9], HIGH);
      delay(ON);
      digitalWrite(pinLed[1], LOW);
      digitalWrite(pinLed[3], LOW);
      digitalWrite(pinLed[5], LOW);
      digitalWrite(pinLed[7], LOW);
      digitalWrite(pinLed[9], LOW);
      delay(OFF);
    }
  u++;
}

void croco(){
    if (u%2 == 0){
      digitalWrite(pinLed[0], HIGH);
      digitalWrite(pinLed[3], HIGH);
      digitalWrite(pinLed[4], HIGH);
      digitalWrite(pinLed[7], HIGH);
      digitalWrite(pinLed[8], HIGH);
      delay(ON);
      digitalWrite(pinLed[0], LOW);
      digitalWrite(pinLed[3], LOW);
      digitalWrite(pinLed[4], LOW);
      digitalWrite(pinLed[7], LOW);
      digitalWrite(pinLed[8], LOW);
      delay(OFF);
    }else{
      digitalWrite(pinLed[1], HIGH);
      digitalWrite(pinLed[2], HIGH);
      digitalWrite(pinLed[5], HIGH);
      digitalWrite(pinLed[6], HIGH);
      digitalWrite(pinLed[9], HIGH);
      delay(ON);
      digitalWrite(pinLed[1], LOW);
      digitalWrite(pinLed[2], LOW);
      digitalWrite(pinLed[5], LOW);
      digitalWrite(pinLed[6], LOW);
      digitalWrite(pinLed[9], LOW);
      delay(OFF);
    }
  u++;
}

void chenille(){
 u=0;
 while(u<10){
    digitalWrite(pinLed[u], HIGH);
    delay(ON);
    digitalWrite(pinLed[u], LOW);
    delay(OFF);
    u=u+2;
  }
  u=1;
  while(u<10){
    digitalWrite(pinLed[u], HIGH);
    delay(ON);
    digitalWrite(pinLed[u], LOW);
    delay(OFF);
    u=u+2;
  }
}

void loop(){
  switch (MODE){
    case 1:
      all();
      break;
    case 2:
      linear();
      break;
    case 3:
      croco();
      break;
    case 4:
      chenille();
      break;
  }
}
