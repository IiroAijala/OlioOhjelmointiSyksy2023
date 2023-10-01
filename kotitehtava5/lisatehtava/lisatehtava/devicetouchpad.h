#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H
#include "DeviceBaseClass.h"

class DeviceTouchPad : public DeviceBaseClass {
private:
    short touchPadSensitivity;

public:
    DeviceTouchPad();
    void setTouchPadSensitivity();
    short getTouchPadSensitivity();
};

#endif // DEVICETOUCHPAD_H
