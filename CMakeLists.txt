cmake_minimum_required(VERSION 3.8)
project(linked_list)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LinkedList.hpp Node.hpp)
add_executable(linked_list ${SOURCE_FILES})