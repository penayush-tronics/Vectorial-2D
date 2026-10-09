cmake_minimum_required(VERSION 3.16)
project(GUItest VERSION 1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

set(CMAKE_AUTOMOC on)
set(CMAKE_AUTORCC on)
set(CMAKE_AUTOUIC on)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(GUItest GUITest.cpp)

target_link_libraries(GUItest PRIVATE Qt6::Widgets)
