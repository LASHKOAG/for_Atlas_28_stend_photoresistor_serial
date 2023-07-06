#ifndef RELAY_H
#define RELAY_H
#include <Arduino.h>

class Relay
{
public:
  Relay(int user_pin);
  void init();
  void RelayOn();
  void RelayOff();

  void set_Pin(int user_pin);
  int get_Pin();

private:
  int m_pin;
};


#endif
