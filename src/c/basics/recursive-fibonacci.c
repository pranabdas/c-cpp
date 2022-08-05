/*=============================================================================
Program: recursion to calculate fibonacci series
F(n) = F(n-1) + F(n-2)
F(1) = 1
F(0) = 0
Author: Pranab Das (GitHub: @pranabdas)
Date: 04-Aug-2022

Note: Pitfall of recursive function: Fibonacci has an exponential number of
calls that require lots of stack space and extra time.
=============================================================================*/
#include <stdio.h>

long fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
    int lim = 45, i;
    long fib;

    for (i = 0; i < lim; i++)
    {
        fib = fibonacci(i);
        printf("F(%d) = %ld\n", i, fib);
    }
    return 0;
}
