cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 20)
project(moda
        LANGUAGES CXX)

add_executable(main Patient.cpp main.cpp)