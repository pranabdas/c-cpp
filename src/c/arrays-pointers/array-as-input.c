/*=============================================================================
Program: array as input
Author: Pranab Das (GitHub: @pranabdas)
Date: 05-Aug-2022
=============================================================================*/

#include <stdio.h>

float average(int size, float array[])
{
    int i;
    float sum = 0.0;

    for (i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return (sum / size);
}

int main()
{
    int SIZE;
    int i;
    float array[SIZE];

    printf("Enter size of array: ");
    scanf("%d", &SIZE);

    for (i = 0; i < SIZE; i++)
    {
        printf("array[%d] = ", i);
        scanf("%f", &array[i]);
    }

    printf("Average = %f\n", average(SIZE, array));
    return 0;
}
