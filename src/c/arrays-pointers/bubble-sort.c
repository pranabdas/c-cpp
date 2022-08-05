/*=============================================================================
Program: bubble sort
Author: Pranab Das (GitHub: @pranabdas)
Date: 05-Aug-2022
=============================================================================*/

#include <stdio.h>

void swap(float *i, float *j)
{
    float temp = *i;
    *i = *j;
    *j = temp;
}

void bubble_sort(int size, float data[])
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = size - 1; j > i; j--)
        {
            if (data[j - 1] > data[j])
                swap(&data[j - 1], &data[j]);
        }
    }
}

int main()
{
    int SIZE;

    printf("Enter size of array: ");
    scanf("%d", &SIZE);

    int i;
    float array[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        printf("array[%d] = ", i);
        scanf("%f", &array[i]);
    }

    bubble_sort(SIZE, array);

    for (i = 0; i < SIZE; i++)
    {
        printf("%.2f\n", array[i]);
    }

    return 0;
}
