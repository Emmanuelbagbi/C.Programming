In C, the math.h header file provides various mathematical functions for performing common mathematical operations. Here are some of the commonly used functions from math.h:

Trigonometric Functions:
sin(x): Returns the sine of x (where x is in radians).
cos(x): Returns the cosine of x (where x is in radians).
tan(x): Returns the tangent of x (where x is in radians).
asin(x): Returns the arc sine (inverse sine) of x, in the range [-p/2, p/2] radians.
acos(x): Returns the arc cosine (inverse cosine) of x, in the range [0, p] radians.
atan(x): Returns the arc tangent (inverse tangent) of x, in the range [-p/2, p/2] radians.
atan2(y, x): Returns the arc tangent of y/x, in the range [-p, p] radians, based on the signs of both arguments to determine the quadrant of the result.
Exponential and Logarithmic Functions:
exp(x): Returns the exponential function e^x.
log(x): Returns the natural logarithm (base e) of x.
log10(x): Returns the base 10 logarithm of x.
pow(x, y): Returns x raised to the power of y.
sqrt(x): Returns the square root of x.
Rounding and Remainder Functions:
ceil(x): Returns the smallest integer greater than or equal to x.
floor(x): Returns the largest integer less than or equal to x.
round(x): Rounds x to the nearest integer value.
trunc(x): Returns the integer part of x (truncates the fractional part).
fmod(x, y): Returns the remainder of x divided by y.
Miscellaneous Functions:
fabs(x): Returns the absolute value of x.
fmin(x, y): Returns the smaller of x and y.
fmax(x, y): Returns the larger of x and y.
Here's a simple C program that demonstrates the usage of some of these functions:

#include <stdio.h>
#include <math.h>

int main() {
    double x = 2.5;
    double y = 3.7;
    
    // Trigonometric functions
    printf("sin(%.2f) = %.2f\n", x, sin(x));
    printf("cos(%.2f) = %.2f\n", x, cos(x));
    
    // Exponential and logarithmic functions
    printf("exp(%.2f) = %.2f\n", x, exp(x));
    printf("log(%.2f) = %.2f\n", x, log(x));
    
    // Rounding and remainder functions
    printf("ceil(%.2f) = %.2f\n", y, ceil(y));
    printf("floor(%.2f) = %.2f\n", y, floor(y));
    printf("round(%.2f) = %.2f\n", y, round(y));
    
    // Miscellaneous functions
    printf("fabs(%.2f) = %.2f\n", x, fabs(x));
    printf("fmin(%.2f, %.2f) = %.2f\n", x, y, fmin(x, y));
    printf("fmax(%.2f, %.2f) = %.2f\n", x, y, fmax(x, y));
    
    return 0;
}
This program calculates and prints various mathematical functions using the math.h library. You can compile and run this program to see the output.
