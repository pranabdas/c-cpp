/*=============================================================================
Program: function example to add two numbers
Author: Pranab Das (GitHub: @pranabdas)
Date: 04-Aug-2022
=============================================================================*/
#include <stdio.h>

float add(float input1, float input2)
{
    return (input1 + input2);
}

int main()
{
    float input1, input2, sum;
    printf("Enter input 1: ");
    scanf("%f", &input1);
    printf("Enter input 2: ");
    scanf("%f", &input2);

    sum = add(input1, input2);

    printf("Total = %f\n", sum);

    return 0;
}
