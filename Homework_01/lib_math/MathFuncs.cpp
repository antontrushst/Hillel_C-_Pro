#include "MathFuncs.h"

int Math::divide(int dividend, int divisor)
{
    if (divisor != 0)
        return dividend / divisor;

    return -1;
}

int Math::multiply(int multiplicand, int multiplier)
{
    return multiplicand * multiplier;
}

int Math::square(int number)
{
    return number * number;
}