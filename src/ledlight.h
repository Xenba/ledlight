#ifndef ledlight_h
#define ledlight_h
#include "Arduino.h"
class ledlight{
  protected:
	uint8_t pin;
  unsigned long timer = 0;
  public:
  ledlight();
  ledlight(int p);
  void ledstatus(unsigned int timehigh, unsigned int timelow );
  void begin();

};
#endif