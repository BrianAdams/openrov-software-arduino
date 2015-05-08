#if(HAS_STD_2XV2_THRUSTERS)
#ifndef __THRUSTERS_H_
#define __THRUSTERS_H_
#include <Arduino.h>
#include "Device.h"
#include "Pin.h"

#define MOTOR_NEUTRAL = 1500
#define MOTOR_COUNT = 4

#if(HAS_STD_CAPE)
  #include "Cape.h"
#endif

#if(HAS_OROV_CONTROLLERBOARD_25)
  #include "controllerboard25.h"
#endif

class Thrusters : public Device {
  public:
    Thrusters():Device(){};
    void device_setup();
    void device_loop(Command cmd);
};
#endif
#endif
