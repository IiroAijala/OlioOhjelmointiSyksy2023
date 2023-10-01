#include "MyDeviceUI.h"
#include <iostream>

MyDeviceUI::MyDeviceUI() {
    objectDeviceMouse = new DeviceMouse();
    objectDeviceTouchPad = new DeviceTouchPad();
    objectDeviceDisplay = new DeviceDisplay();
}

MyDeviceUI::~MyDeviceUI() {
    delete objectDeviceMouse;
    delete objectDeviceTouchPad;
    delete objectDeviceDisplay;
}

void MyDeviceUI::uiShowMenu() {
    std::cout << "DEVICE MENU" << std::endl;
    std::cout << "===========" << std::endl;
    std::cout << "1: Set Mouse Information" << std::endl;
    std::cout << "2: Set Touch Pad Information" << std::endl;
    std::cout << "3: Set Display Information" << std::endl;
    std::cout << "4: Show Devices Information" << std::endl;
    std::cout << "5: Finish" << std::endl;
    std::cout << "Choose: ";
}

void MyDeviceUI::uiSetMouseInformation() {
    objectDeviceMouse->setDeviceID();
    objectDeviceMouse->setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation() {
    objectDeviceTouchPad->setDeviceID();
    objectDeviceTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation() {
    objectDeviceDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation() {
    std::cout << "Mouse Information:" << std::endl;
    std::cout << "Device ID: " << objectDeviceMouse->getDeviceID() << std::endl;
    std::cout << "Primary Button: " << objectDeviceMouse->getPrimaryButton() << std::endl;

    std::cout << "Touch Pad Information:" << std::endl;
    std::cout << "Device ID: " << objectDeviceTouchPad->getDeviceID() << std::endl;
    std::cout << "Touch Pad Sensitivity: " << objectDeviceTouchPad->getTouchPadSensitivity() << std::endl;

    std::cout << "Display Information:" << std::endl;
    std::cout << "Display Resolution: " << objectDeviceDisplay->getDisplayResolution() << std::endl;
}
