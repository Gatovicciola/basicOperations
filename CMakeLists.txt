cmake_minimum_required(VERSION 3.4...3.18)
project(basicOperations)

add_library(basicOperationLib SHARED src/basicOperations.hpp src/basicOperations.cpp)
target_link_libraries(basicOperationsLib antlr4-runtime)

add_subdirectory(pybind11)
pybind11_add_module(basicOperations SHARED src/binder.cpp)

target_link_libraries(basicOperations PRIVATE basicOperationsLib)
