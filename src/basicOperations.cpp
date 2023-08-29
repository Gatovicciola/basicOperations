#include "basicOperations.hpp"
#include <cmath>

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
        throw std::runtime_error("Cannot calculate square root of a negative number.");
    }
    return std::sqrt(a);
}