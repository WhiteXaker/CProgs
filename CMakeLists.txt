cmake_minimum_required(VERSION 3.3)
project(CProgs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 17.cpp)
add_executable(CProgs ${SOURCE_FILES})