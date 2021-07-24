cmake_minimum_required(VERSION 3.19)
project(ch1-p1)

set(CMAKE_CXX_STANDARD 14)

include_directories(..)

add_executable(p1
        clockType.h
        clockTypeImp.cpp
        clockTypeTest.cpp)
