cmake_minimum_required(VERSION 3.4...3.18)
project(basicOperations)
#/usr/bin/python3.11

# Cpp Application
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src /home/nocasteleyn/programming/installs/Lyra-1.6.1/include)
add_library(basicOperationsShared SHARED src/basicOperations.hpp src/basicOperations.cpp src/cmdInterface.cpp)
target_link_libraries(basicOperationsShared)

# Python API
add_subdirectory(pybind11)
pybind11_add_module(basicOperations SHARED src/binder.cpp)
target_link_libraries(basicOperations PRIVATE basicOperationsShared)