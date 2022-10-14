#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *base, x;
    FILE *fp;

    // allocate memory
    base = (int *)malloc(sizeof(int) * 10);
    if (base == NULL)
    {
        fprintf(stderr, "Failed to allocate memory.\n");
        exit(1);
    }

    // fill with values
    for (x = 0; x < 10; x++)
    {
        *(base + x) = x * 10;
    }

    // open file
    fp = fopen("numbers.bin", "w");
    if (fp == NULL)
    {
        printf("File could not be created.\n");
        exit(1);
    }

    printf("%d\n", *(base + 1));
    // save buffer to file
    int size;
    size = fwrite(base, sizeof(int), 10, fp); 
    // this returns number of items
    // the data is written in the binary format as it exit in the buffer
    printf("%d\n", size);
    fclose(fp);
    return 0;
}
