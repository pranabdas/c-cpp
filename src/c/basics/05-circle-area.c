/*=============================================================================
Program: Calculate area of a circle given its radius
Author: Pranab Das (GitHub: @pranabdas)
Date: 04-Aug-2022
=============================================================================*/

#include <stdio.h>

#define PI 3.14159
// preprocessor statement: it tells the compiler to replace instances of PI with
// its defined value

int main()
{
    double area = 0.0;
    double radius = 0.0;
    printf("Enter radius: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    printf("Area of circle = %lf\n", area);
}

/*=============================================================================
Test 1:
radius = 1
area = 3.14159
=============================================================================*/
