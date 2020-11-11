#include "myMath.h"
#define EXP 2.7182

double Exponent(int x)
{
    return Power(EXP, x);
}

double Power(double x, int y)
{
    double res = 1;
    boolean neg = false;
    if(y<0) {
        neg = true;
        y=-y;
    }
    while (y > 0)
    {
        res *= x;
        y--;
    }
    if(neg)
        res = 1/res;
    return res;
}
