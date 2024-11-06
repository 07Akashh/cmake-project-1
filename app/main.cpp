#include <iostream>
#include "mathlib/MathFunctions.h"

int main() {
    double number;
    
    std::cout << "Enter a number to calculate its square root: ";
    std::cin >> number;

    if (number < 0) {
        std::cerr << "Error: Cannot calculate the square root of a negative number.\n";
        return 1;
    }

    double result = mathlib::sqrt(number);

    std::cout << "The square root of " << number << " is " << result << std::endl;
    return 0;
}
