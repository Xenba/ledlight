#ifndef ledlight_h
#define ledlight_h
#include "Arduino.h"
class ledlight{
  protected:
	int pin;
  unsigned long timer = 0;
  public:
  ledlight();
  ledlight(int p);
  void ledstatus(int timer );
  void begin();

};
#endif