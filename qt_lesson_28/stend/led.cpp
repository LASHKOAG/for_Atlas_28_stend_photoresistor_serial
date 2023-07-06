#include "led.h"

Led::Led(int user_pin):m_pin{user_pin}
{
}

void Led::init()
{
  pinMode (m_pin, OUTPUT);
}

void Led::led_on()
{
  digitalWrite(m_pin, HIGH);
}

void Led::led_off()
{
  digitalWrite(m_pin, LOW);
}
