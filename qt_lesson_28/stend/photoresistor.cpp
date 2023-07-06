#include "photoresistor.h"

Photoresistor::Photoresistor(int user_pin):m_pin{user_pin}
{  
}

void Photoresistor::init()
{
  pinMode(m_pin, INPUT);
}

int Photoresistor::get_data()
{
  return analogRead(m_pin);
}

String Photoresistor::get_sensor_name()
{
  return m_sensor_name;
}
