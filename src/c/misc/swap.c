/*=============================================================================
Program: call by reference
Author: Pranab Das (GitHub: @pranabdas)
Date: 05-Aug-2022
=============================================================================*/

#include <stdio.h>

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{
    int a = 3, b = 5;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
