cmake_minimum_required(VERSION 3.5)

project(kotitehtava2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(kotitehtava2 main.cpp
    game.h)

include(GNUInstallDirs)
install(TARGETS kotitehtava2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
