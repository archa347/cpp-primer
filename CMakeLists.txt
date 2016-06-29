cmake_minimum_required(VERSION 3.3)
project(cpp_primer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    1.1.1/prog1.cc
    1.2/prog2.cpp
    Vagrantfile)

add_executable(cpp_primer ${SOURCE_FILES})