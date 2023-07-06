#ifndef PHOTORESISTOR_H
#define PHOTORESISTOR_H
#include <Arduino.h>

class Photoresistor
{
public:
  Photoresistor(int user_pin);

  int get_data();
  String get_sensor_name();
  void init();
  
private:
  int m_pin;
  const String m_sensor_name{"Photoresistor"};
};


#endif
