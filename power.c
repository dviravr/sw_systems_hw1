#include "myMath.h"
#define EXP 2.7182

double Exponent(int x)
{
    return Power(EXP, x);
}

double Power(double x, int y)
{
    double res = 1;
    while (y > 0)
    {
        res *= x;
        y--;
    }
    return res;
}
