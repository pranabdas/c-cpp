/*=============================================================================
Program: Add two numbers (floats)
Author: Pranab Das (GitHub: @pranabdas)
Date: 04-Aug-2022
=============================================================================*/

#include <stdio.h>

int main()
{
    float input1, input2, sum;
    printf("Enter input 1: ");
    scanf("%f", &input1);
    printf("Enter input 2: ");
    scanf("%f", &input2);

    sum = input1 + input2;
    printf("Total = %f\n", sum);
    return 0;
}
