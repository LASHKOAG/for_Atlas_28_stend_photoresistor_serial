#include "portmonitor.h"

PortMonitor::PortMonitor()
{
  
}

//GND VCC READ Transfer
//UART

void PortMonitor::init()
{
  Serial.begin(m_serial_speed);
}

void PortMonitor::set_serial_speed(int user_data)
{
  //ToDo: check standart serial speed
  //int Serial_speed_array[] = {5400, ...}
  m_serial_speed = user_data;
}

int PortMonitor::get_serial_speed()
{
  return m_serial_speed;
}

void PortMonitor::print_data()
{
  Serial.println("Privet!");
}

void PortMonitor::print_data(int current_value)
{
  Serial.println(current_value);
}

void PortMonitor::print_data(String sensor_name)
{
  Serial.println(sensor_name);
}

void PortMonitor::print_data(String sensor_name, int current_value)
{
  Serial.print(sensor_name + ": ");
  Serial.println(current_value);
}

//analogRead(pin)
