cmake_minimum_required(VERSION 3.2)

project(Code)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)


add_executable(Code main.cpp battle.cpp battle.h character.cpp character.h commands.cpp commands.h dice.cpp dice.h glossary.cpp glossary.h interactions.cpp interactions.h inventory.cpp inventory.h items.cpp items.h text.cpp text.h ui.cpp ui.h world.cpp world.h)
