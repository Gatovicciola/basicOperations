#include "basicOperations.hpp"
#include <cmath>
#include <iostream>
#include <stdexcept>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
	    std::cerr << "Error: division by zero." << std::endl;
        return 0;
    }
}

double rootSquare(double a) {
    if (a < 0) {
	    std::cerr << "Error: square root of a negative number." << std::endl;
        return 0;
    }
    return std::sqrt(a);
}
