cmake_minimum_required(VERSION 3.14)
project(Pizza)

set(CMAKE_CXX_STANDARD 14)

add_executable(Pizza main.cpp Pizza.cpp Pizza.h CustomerOrder.cpp CustomerOrder.h)