#include <stdio.h>
#include "myMath.h"


int main()
{
    double x;
    printf("Please inset a real number:\t");
    scanf("%lf",&x);
    int intX= (int)x;
    float answer1 = sub(add(Exponent(intX),Power(x,3)),2); 
    printf("The value of f(x) = e^x+x^3−2 at the point %.4lf is: %.4f\n", x, answer1);
    float answer2 = add(mul(x,3),mul(Power(x,2),2));
    printf("The value of f(x) = 3x+2x^2 at the point %.4lf is: %.4f\n",x,answer2);
    float answer3 = sub(div(mul(Power(x,3),4),5),mul(x,2));
    printf("The value of f(x) = (4x^3)/5 -2x at the point %.4lf is: %.4f\n",x,answer3);



    return 0;
}

