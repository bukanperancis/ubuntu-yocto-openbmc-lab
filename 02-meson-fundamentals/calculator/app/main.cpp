#include <iostream>
#include "calculator.hpp"

int main()
{
    int a = 10;
    int b = 5;

    std::cout << "Calculator Demo" << std::endl;
    std::cout << "----------------" << std::endl;

    std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
    std::cout << a << " - " << b << " = " << subtract(a, b) << std::endl;
    std::cout << a << " * " << b << " = " << multiply(a, b) << std::endl;
    std::cout << a << " / " << b << " = " << divide(a, b) << std::endl;

    return 0;
}
