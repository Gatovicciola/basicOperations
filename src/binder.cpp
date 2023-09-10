#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "basicOperations.hpp"
#include "cmdInterface.cpp"

auto bridge(pybind11::str cmds) {

    // Convert the Python string to a C++ std::string
    std::string cmd_string = cmds.cast<std::string>();
    std::cout << "cmd_string: " << cmd_string << std::endl;

    // Tokenize the command string into separate arguments
    std::vector<std::string> args;
    std::istringstream iss(cmd_string);
    std::string arg;
    
    // Set the program name as "send_command"
    args.push_back("cmd_string:");

    while (iss >> arg) {
        args.push_back(arg);
    }

    // Create argc and argv
    int argc = static_cast<int>(args.size());
    char** argv = new char*[argc];
    for (int i = 0; i < argc; ++i) {
        argv[i] = new char[args[i].size() + 1];
        std::strcpy(argv[i], args[i].c_str());
    }

    // Call your_function with argc and argv
    int result = main(argc, argv);  // Replace 'your_function' with the actual function you want to call.

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