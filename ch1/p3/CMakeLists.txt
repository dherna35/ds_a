cmake_minimum_required(VERSION 3.19)
project(ch1-p3)

set(CMAKE_CXX_STANDARD 14)

include_directories(..)

add_executable(p1
        dayType.h
        dayTypeTest.cpp
        )
