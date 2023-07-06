#include "relay.h"

Relay::Relay(int user_pin):m_pin{user_pin}
{
  //set_Pin(user_pin);
}

void Relay::init()
{
  pinMode(m_pin, OUTPUT);
}

void Relay::RelayOn()
{
  digitalWrite(m_pin, HIGH);
}

void Relay::RelayOff()
{
  digitalWrite(get_Pin(), LOW);
}

void Relay::set_Pin(int user_pin)
{
  //ToDo: if check pin 8-11
  m_pin = user_pin;
}

int Relay::get_Pin()
{
  return m_pin;
}
//
