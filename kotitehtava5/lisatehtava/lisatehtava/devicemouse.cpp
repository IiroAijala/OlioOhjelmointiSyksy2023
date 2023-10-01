#include "DeviceMouse.h"
#include <iostream>

DeviceMouse::DeviceMouse() : primaryButton(0) {}

void DeviceMouse::setPrimaryButton() {
    std::cout << "Set Primary Button (1 for left, 2 for right): ";
    std::cin >> primaryButton;
}

short DeviceMouse::getPrimaryButton() {
    return primaryButton;
}
