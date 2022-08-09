#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *base, x, r;
    FILE *fp;

    // allocate buffer
    base = (int *)malloc(sizeof(int) * 10);
    if (base == NULL)
    {
        fprintf(stderr, "Error while allocating memory.\n");
        exit(1);
    }

    // open file
    fp = fopen("numbers.bin", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Error reading file.\n");
        exit(1);
    }

    // fill the buffer
    r = fread(base, sizeof(int), 10, fp);
    if (r != 10)
    {
        fprintf(stderr, "Could not read 10 numbers.\n");
        exit(1);
    }

    // print values from buffer
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *(base + i));
    }

    return 0;
}
