// we will use `qsort` from C standard library to sort an array of integers
// time complexity of qsort is O(n log(n)), and O(n^2) in the worst case
#include <stdio.h>
#include <stdlib.h>

int compare_integers(const void *a, const void *b)
{
    if (*(int *)a > *(int *)b)
    {
        return 1;
    }
    else if (*(int *)a < *(int *)b)
    {
        return (-1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a[] = {5, 8, 2, 3, 7, 4};
    const int SIZE = 6;
    int i;
    // void qsort(void *base, size_t nel, size_t width,
    //            int (*compare) (const void *, const void *));
    qsort(a, SIZE, sizeof(int), compare_integers);

    for (i = 0; i < SIZE; i++)
    {
        printf("%d", a[i]);
        if (i < SIZE - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
