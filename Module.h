#ifndef MODULE_H
#define MODULE_H

#include "Arduino.h"

struct Module {
  String id;
  String status_device = "normal"; // "normal" | low_battery
  String statuc_dea = "normal"; // "normal" | open_door | low_battery
  // float temperature; // in celcius
};


#endif // MODULE_H