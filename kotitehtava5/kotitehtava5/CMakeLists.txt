cmake_minimum_required(VERSION 3.5)

project(kotitehtava5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(kotitehtava5 main.cpp
    katutaso.h katutaso.cpp
    kerros.h kerros.cpp
    kerrostalo.h kerrostalo.cpp
    asunto.h asunto.cpp)

include(GNUInstallDirs)
install(TARGETS kotitehtava5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
