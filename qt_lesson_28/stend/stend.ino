#include "relay.h"
#include "portmonitor.h"
#include "photoresistor.h"
#include "led.h"

Relay* relay_lamp = new Relay(8);
PortMonitor* port_monitor = new PortMonitor();
Photoresistor* photoresistor = new Photoresistor(A0);
Led* led_white = new Led(4);

int x{0};
void setup()
{
  relay_lamp->init();
  port_monitor->init();
  photoresistor->init();
  led_white->init();
}

void loop()
{
  relay_lamp->RelayOff();
  x = photoresistor->get_data();
  port_monitor->print_data(photoresistor->get_sensor_name(), x);
  led_white->led_off();
  
//  delay(60000);
//  if (relay_lamp != NULL)
//  {
//    delete relay_lamp;
//  }
}
