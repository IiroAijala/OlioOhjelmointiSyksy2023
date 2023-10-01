#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "DeviceMouse.h"
#include "DeviceTouchPad.h"
#include "DeviceDisplay.h"

class MyDeviceUI {
private:
    DeviceMouse* objectDeviceMouse;
    DeviceTouchPad* objectDeviceTouchPad;
    DeviceDisplay* objectDeviceDisplay;

public:
    MyDeviceUI();
    ~MyDeviceUI();
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();
};

#endif // MYDEVICEUI_H
