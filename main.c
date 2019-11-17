#include <stdio.h>
#include "myMath.h"
void function(double x) {
    int xFORexp = (int) x;
    float F1 = add((float) Exp(xFORexp), (float) Pow(x, 3));
    float ansF1 = sub(F1, 2);

    float F2 = add((float) mul(x, 3), (float) mul(Pow(x, 2), 2));

    float denominator = sub(5, (float) mul(x, 2));
    float numerator = (float) mul(Pow(x, 3), 4);
    float F3 = (float) div(numerator, denominator);


    printf("The value of f(x)= e^x + x^3 -2 at the point %.4f is: %.4f\nThe value of f(x)= 3x + 2x^2 at the point"
           " %.4f is: %.4f\nThe value of f(x)= (4x^3) / 5-2x at the point %.4f is: %.4f", x, ansF1, x, F2, x, F3);

}

int main(){
    double x=0;
    printf("Please insert a real number:");
    scanf("%lf", &x);
    function(x);

}