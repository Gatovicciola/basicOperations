#include <pybind11/pybind11.h>
#include "basicOperations.hpp"
#include "cmdInterface.cpp"

namespace py = pybind11;


int bridge(pybind11::list cmds) {
    // Convert the Python list to a C++ vector of strings
    std::vector<std::string> args;
    for (auto item : cmds) {
        args.push_back(pybind11::str(item));
    }

    // Create argc and argv
    int argc = static_cast<int>(args.size());
    char** argv = new char*[argc];
    for (int i = 0; i < argc; ++i) {
        argv[i] = new char[args[i].size() + 1];
        std::strcpy(argv[i], args[i].c_str());
    }

    // Call your_function with argc and argv
    int result = main(argc, argv);

    // Clean up argv
    for (int i = 0; i < argc; ++i) {
        delete[] argv[i];
    }
    delete[] argv;

    return result;
}

PYBIND11_MODULE(basicOperations, m) {
    m.def("add", &add, "Add two numbers");
    m.def("subtract", &subtract, "Subtract two numbers");
    m.def("multiply", &multiply, "Multiply two numbers");
    m.def("divide", &divide, "Divide two numbers");
    m.def("rootSquare", &rootSquare, "Calculate the square root");
    m.def("send_command", &bridge, "Bridge function");
}