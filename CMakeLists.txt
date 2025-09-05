cmake_minimum_required(VERSION 3.30)
project(beecrowd)

set(CMAKE_CXX_STANDARD 20)

add_library(beecrowd STATIC library.cpp
        2006.cpp
        1170.cpp
        1138.cpp)
