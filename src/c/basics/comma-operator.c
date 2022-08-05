/*=============================================================================
Program: comma operator
Author: Pranab Das (GitHub: @pranabdas)
Date: 04-Aug-2022
=============================================================================*/
#include <stdio.h>

int main()
{
    int i, sum;
    for (sum = 0, i = 1; i < 10; i++)
    // evaluate first expr, then assign second expr
    {
        sum += i;
        printf("%d\t%d\n", i, sum);
    }
    return 0;
}
