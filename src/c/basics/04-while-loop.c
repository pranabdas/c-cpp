#include <stdio.h>

int main()
{
    int i = 1, i2 = 0;

    while (i < 10)
    {
        i2 = i * i;
        printf("%d\t%d\n", i, i2);
        i++;
    }

    // do while loop
    printf("\nExample of do-while loop:\n");
    i = 1;
    do
    {
        i2 = i * i;
        printf("%d\t%d\n", i, i2);
        i++;
    } while (i < 10);

    return 0;
}
