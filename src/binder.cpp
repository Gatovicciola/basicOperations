#include <pybind11/pybind11.h>
#include "basicOperations.hpp"

namespace py = pybind11;

PYBIND11_MODULE(basicOperations, m) {
    m.def("add", &add, "Add two numbers");
    m.def("subtract", &subtract, "Subtract two numbers");
    m.def("multiply", &multiply, "Multiply two numbers");
    m.def("divide", &divide, "Divide two numbers");
    m.def("rootSquare", &rootSquare, "Calculate the square root");
}