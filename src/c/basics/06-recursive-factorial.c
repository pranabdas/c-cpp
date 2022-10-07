#include <stdio.h>

// long allows factorial up to 20
long factorial(int num)
{
    if (num == 1)
        return 1;
    else
        return (num * factorial(num - 1));
}

int main()
{
    int lim = 10, i;
    long fact;

    for (i = 1; i < lim; i++)
    {
        fact = factorial(i);
        printf("%d! = %ld\n", i, fact);
    }
    return 0;
}
