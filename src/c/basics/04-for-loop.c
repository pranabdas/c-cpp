#include <stdio.h>

int main()
{
    int i = 10;
    int i2 = 0;

    for (i = 1; i < 10; i++)
    {
        i2 = i * i;
        printf("%d\t%d\n", i, i2);
    }
    
    return 0;
}
