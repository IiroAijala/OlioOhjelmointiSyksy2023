#include "MyDeviceUI.h"
#include <iostream>

int main() {
    MyDeviceUI deviceUI;

    int choice = 0;

    while (choice != 5) {
        deviceUI.uiShowMenu();
        std::cin >> choice;

        switch (choice) {
        case 1:
            deviceUI.uiSetMouseInformation();
            break;
        case 2:
            deviceUI.uiSetTouchPadInformation();
            break;
        case 3:
            deviceUI.uiSetDisplayInformation();
            break;
        case 4:
            deviceUI.uiShowDeviceInformation();
            break;
        case 5:
            std::cout << "Finishing the program." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
