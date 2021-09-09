cmake_minimum_required(VERSION 3.20)
project(OpenGl)

set(CMAKE_CXX_STANDARD 14)

add_executable(OpenGl main.cpp)
target_link_libraries(OpenGl -lOpenGL32)