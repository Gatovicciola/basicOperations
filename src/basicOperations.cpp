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
        // You might want to handle the division by zero case here
        // For now, let's just return 0. You can customize this.
        return 0;
    }
}

double rootSquare(double a) {
    if (a < 0) {
	    std::cerr << "Error: Cannot calcule square root of a negative number." << std::endl;
    }
    return std::sqrt(a);
}
