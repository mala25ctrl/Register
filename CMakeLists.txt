cmake_minimum_required(VERSION 3.28)
project(register)

set(CMAKE_CXX_STANDARD 17)

add_executable(register main.cpp
        Activity.cpp
        Activity.h
        Register.cpp
        Register.h)
