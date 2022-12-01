cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(Rev LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

include(doctest.cmake)
add_executable(Rev test_reverse.cpp)
target_link_libraries(Reverse PRIVATE doctest)
