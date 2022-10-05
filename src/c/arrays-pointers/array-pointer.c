#include <stdio.h>

int main()
{
    int arr[5] = {8, 14, 1, 4, 7};
    int i, *ptr;

    ptr = arr;

    for (i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d at %p\n", i, arr[i], &arr[i]);
    }

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d at %p\n", i, *(ptr + i), ptr + i);
        // *(ptr + 1) refers to the next pointer address
    }

    return 0;
}
