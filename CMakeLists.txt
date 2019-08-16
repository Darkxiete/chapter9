cmake_minimum_required(VERSION 3.14)
project(chapter9)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter9_1_2_3 includes/coordin/coordin.h 9_2.cpp 9_3.cpp)

include_directories(includes/general)