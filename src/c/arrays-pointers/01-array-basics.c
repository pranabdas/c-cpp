#include <stdio.h>

int main()
{
    const int SIZE = 5;

    // int array1[SIZE] = {0}; // if the array size is not knowns compile time,
                            // use heap dynamic memory
    // int array2[SIZE] = {1, 2, 3, 4, 5};
    // some compiler might complain here, use 5 instead of SIZE
    // fails in gcc, however works in apple clang
    int array1[5] = {0};
    int array2[5] = {1, 2, 3, 4, 5};
    int array3[] = {1, 2, 3, 4, 5};

    char str1[] = "hello";

    int i;
    double sum2 = 0, sum3 = 0;
    double *ptr_sum2 = &sum2;

    for (i = 0; i < SIZE; i++)
    {
        sum2 += array2[i];
        sum3 += array3[i];
    }

    printf("Sum2 = %f\n", sum2);
    printf("Sum3 = %f\n", sum3);

    printf("Pointer sum2: %p\n", ptr_sum2);
    printf("Sum2 = %f\n", *ptr_sum2);

    printf("array2 position: %p\n", array2);

    return 0;
}
