/*=============================================================================
Program: example of ternary operator
Author: Pranab Das (GitHub: @pranabdas)
Date: 04-Aug-2022
=============================================================================*/
#include <stdio.h>

int main()
{
    int input1, input2, big;
    printf("Enter two integer numbers (separated by space): ");
    scanf("%d%d", &input1, &input2);

    big = (input1 > input2) ? input1 : input2;

    printf("Biggest number = %d\n", big);
    return 0;
}
