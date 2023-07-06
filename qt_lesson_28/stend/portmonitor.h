#ifndef PORTMONITOR_H
#define PORTMONITOR_H
#include <Arduino.h>

class PortMonitor
{
public:
  PortMonitor();
  void init();
  void print_data();
  void print_data(int current_value);
  void print_data(String sensor_name);
  void print_data(String sensor_name, int current_value);
  
  void set_serial_speed(int user_data);
  int get_serial_speed();
  
private:
  int m_serial_speed{9600};
};

#endif
