cmake_minimum_required(VERSION 3.19)
project(ch2-p2.1)

set(CMAKE_CXX_STANDARD 14)

include_directories(..)

add_executable(p2.1
        factorer.cpp
        factorer.h
        main.cpp
        )
