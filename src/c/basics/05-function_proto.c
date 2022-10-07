/*=============================================================================
Program: using function prototype, the definition can be placed after main()
Author: Pranab Das (GitHub: @pranabdas)
Date: 04-Aug-2022
=============================================================================*/
#include <stdio.h>

float add(float, float);  // float add(float input1, float input2);

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

// function definition can be placed after main()
float add(float input1, float input2)
{
    return (input1 + input2);
}
