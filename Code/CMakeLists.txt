cmake_minimum_required(VERSION 3.2)

project(Code)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)


add_executable(Code main.cpp dice.cpp dice.h text.cpp text.h ui.cpp ui.h)
