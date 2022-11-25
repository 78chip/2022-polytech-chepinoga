cmake_minimum_required(VERSION 3.16)
project(binarysearch LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(binarysearch bin.cpp binaryfunc.cpp)

