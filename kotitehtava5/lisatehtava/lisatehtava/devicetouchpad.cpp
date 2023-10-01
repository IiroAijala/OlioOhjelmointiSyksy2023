#include "DeviceTouchPad.h"
#include <iostream>

DeviceTouchPad::DeviceTouchPad() : touchPadSensitivity(0) {}

void DeviceTouchPad::setTouchPadSensitivity() {
    std::cout << "Set Touch Pad Sensitivity (1-5): ";
    std::cin >> touchPadSensitivity;
}

short DeviceTouchPad::getTouchPadSensitivity() {
    return touchPadSensitivity;
}
