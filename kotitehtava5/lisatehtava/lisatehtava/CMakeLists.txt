cmake_minimum_required(VERSION 3.5)

project(lisatehtava LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lisatehtava main.cpp
    devicedisplay.h devicedisplay.cpp
    devicebaseclass.h devicebaseclass.cpp
    devicetouchpad.h devicetouchpad.cpp
    devicemouse.h devicemouse.cpp
    mydeviceui.h mydeviceui.cpp)

include(GNUInstallDirs)
install(TARGETS lisatehtava
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
