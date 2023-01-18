// recursive version of this program has exponential complexity O(a^n), where
// `a` is the golden ratio 1.6180339887. T(n) = T(n-1) + T(n-2) + O(1), which is
// in-between 2T(n-1) ~ 2^n and 2T(n-2) ~ 2^(n/2) ~ (√2)^n ~ 1.4142^n. By using
// following dynamic programming technique the complexity becomes linear in
// time. Recursion is a top down approach, while dynamic programming is bottom
// up approach so that we do not duplicate sub tasks
// https://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#dynamicProgramming
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int fib(int n)
{
    int *a;
    int i;
    int result;

    if (n < 1)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        a = malloc(sizeof(*a) * (n + 1));
        assert(a);

        a[0] = 0;
        a[1] = 1;

        for (i = 2; i <= n; i++)
        {
            a[i] = a[i - 1] + a[i - 2];
        }
    }

    result = a[n];
    free(a);
    return result;
}

int main()
{
    int n = 45;
    printf("Fib(%d) = %d\n", n, fib(n));

    return 0;
}
