#include "DeviceDisplay.h"
#include <iostream>

DeviceDisplay::DeviceDisplay() : displayResolution(0) {}

void DeviceDisplay::setDisplayResolution() {
    std::cout << "Set Display Resolution: ";
    std::cin >> displayResolution;
}

short DeviceDisplay::getDisplayResolution() {
    return displayResolution;
}
