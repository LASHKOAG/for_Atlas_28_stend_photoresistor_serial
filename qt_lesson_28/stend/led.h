#ifndef LED_H
#define LED_H
#include <Arduino.h>

class Led
{
public:
  Led(int user_pin);
  
  void init();
  void led_on();
  void led_off();
    
private:
  int m_pin;

};

#endif
