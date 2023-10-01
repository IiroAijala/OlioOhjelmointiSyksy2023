#include "DeviceBaseClass.h"
#include <iostream>

DeviceBaseClass::DeviceBaseClass() : deviceID(0) {}

void DeviceBaseClass::setDeviceID() {
    std::cout << "Set Device ID: ";
    std::cin >> deviceID;
}

short DeviceBaseClass::getDeviceID() {
    return deviceID;
}
