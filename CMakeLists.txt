cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g -O3 -std=c++11")

include_directories(include)

add_executable(test_circle_buffer src/circle_buffer.cpp src/test_circle_buffer.cpp)
add_executable(test_1 execution_result/test_1.cpp)
