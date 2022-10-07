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

    return 0;
}
