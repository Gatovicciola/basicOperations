#include <iostream>
#include <lyra/lyra.hpp>
#include "basicOperations.hpp" // Include your basic operations header

int main(int argc, char* argv[]) {
    double a = 0.0;
    double b = 0.0;
    bool showHelp= false;
    bool add_= false;
    bool subt= false;
    bool mult= false;
    bool divd= false;
    bool sqrt= false;

    // Define command-line options using Lyra
    auto cli = lyra::cli()
        | lyra::help(showHelp)
        | lyra::opt(add_)["--add"]("Adds two numbers")
        | lyra::opt(subt)["--subt"]("Subtracts two numbers")
        | lyra::opt(mult)["--mult"]("Multiplies two numbers")
        | lyra::opt(divd)["--divd"]("Divides two numbers")
        | lyra::opt(sqrt)["--sqrt"]("Calculates the square root of a number")
        | lyra::opt(a, "a")["-a"]("first variable")
        | lyra::opt(b, "b")["-b"]("second variable");

    // Parse the command-line arguments
    auto result = cli.parse({argc, argv});

    if (!result) {
        std::cerr << "Error in command-line arguments: " << result.message() << std::endl;
        return 1;
    }

    // Perform the selected operation
    double resultValue;
    if (showHelp) {
        std::cout << cli << std::endl;
        return 0;
    } else if (add_) {
        resultValue = add(a, b);
    } else if (subt) {
        resultValue = subtract(a, b);
    } else if (mult) {
        resultValue = multiply(a, b);
    } else if (divd) {
        resultValue = divide(a, b);
    } else if (sqrt) {
        resultValue = rootSquare(a);
    } else {
        std::cerr << "[Error]: command not found " <<  std::endl;
        return 1;
    }

    std::cout << "Result: " << resultValue << std::endl;
    return 0;
}