cmake_minimum_required(VERSION 3.26)
project(exercise6CLEAN)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(exercise6CLEAN
        main.cpp
        sstack.cpp
        sstack.h
        stacktest.cpp)
