cmake_minimum_required(VERSION 3.14)
project(chapter9)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter9_1_2_3 includes/coordin/coordin.h 9_2.cpp 9_3.cpp)
add_executable(chapter9_7_8 9_7.cpp 9_8.cpp)
add_executable(chapter9_9 9_9.cpp)
add_executable(chapter9_10 9_10.cpp)
add_executable(recursive recursive.cpp)

include_directories(includes/general)