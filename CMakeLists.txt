cmake_minimum_required(VERSION 3.9)
project(LittleDot)

set(CMAKE_CXX_STANDARD 11)

add_executable(LittleDot main.cpp GameManager.cpp GameManager.h Pack.cpp Pack.h Card.cpp Card.h Player.cpp Player.h)