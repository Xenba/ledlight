#include "ledlight.h"

ledlight::ledlight(){}
ledlight::ledlight(int p){
  pin = p;
}

void ledlight::ledstatus(unsigned int timehigh, unsigned int timelow ){
if (digitalRead(pin) == LOW) {
  if (millis() - timer >= timehigh) {
  timer = millis();
  digitalWrite(pin, HIGH);
   //Serial.println(digitalRead(pin));
  }

} 
else {
  if (millis() - timer >= timelow){
  timer = millis();
 digitalWrite(pin, LOW);
 //Serial.println(digitalRead(pin));
  }
}

}
void ledlight::begin(){
  pinMode(pin,OUTPUT);
}
