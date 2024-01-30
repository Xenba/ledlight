#include "ledlight.h"

ledlight::ledlight(){}
ledlight::ledlight(int p){
  pin = p;
}

void ledlight::ledstatus(int timet ){
    if (millis() - timer >= timet) {
      timer = millis();
      
      if (digitalRead(pin) == LOW) {
        digitalWrite(pin, HIGH);
      } else {
        digitalWrite(pin, LOW);
      }
 }
}
void ledlight::begin(){
  pinMode(pin,OUTPUT);
}
