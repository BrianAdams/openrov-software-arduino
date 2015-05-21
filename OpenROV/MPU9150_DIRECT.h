
#include "AConfig.h"
#if(HAS_MPU9150_DIRECT)
#ifndef __MPU9150_DIRECT_H_
#define __MPU9150_DIRECT_H_
#include <Arduino.h>
#include "Device.h"

class MPU9150_DIRECT : public Device {
  public:
    MPU9150_DIRECT():Device(){};
    void device_setup();
    void device_loop(Command cmd);
};
#endif
#endif
