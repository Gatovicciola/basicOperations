cmake_minimum_required(VERSION 3.4...3.18)
project(basicOperations)
#/usr/bin/python3.11
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
add_library(basicOperations_lib SHARED src/basicOperations.hpp src/basicOperations.cpp)
target_link_libraries(basicOperations_lib)

add_subdirectory(pybind11)
pybind11_add_module(basicOperations SHARED src/binder.cpp)

target_link_libraries(basicOperations PRIVATE basicOperations_lib)
