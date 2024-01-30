#include "ledlight.h"

ledlight led(2);// constructor receives (pin)
void setup() {
  led.begin();// inicializes the pin
}
void loop() {
  led.ledstatus(500);//The time the LED flashes in the cycle is 1 second (500 millis in the wire is the time the light is on and off)
}
