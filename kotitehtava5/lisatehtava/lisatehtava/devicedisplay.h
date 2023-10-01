#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H

class DeviceDisplay {
private:
    short displayResolution;

public:
    DeviceDisplay();
    void setDisplayResolution();
    short getDisplayResolution();
};

#endif // DEVICEDISPLAY_H
