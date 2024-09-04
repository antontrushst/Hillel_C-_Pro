#include <iostream>
#include "MathFuncs.h"

int main()
{
    int a = 10;
    int b = 5;

    std::cout << "Dividing 10 by 5: " << Math::divide(a, b) << "\n";
    std::cout << "Multiplying 10 by 5: " << Math::multiply(a, b) << "\n";
    std::cout << "Finding sqaure of 10: " << Math::square(a) << "\n";
    return 0;
}