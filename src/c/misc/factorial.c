/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
File Name: Factorial.c
Author: Pranab Das (GitHub: @pranabdas)
Creation: 8th Feb, 2009

Purpose: This program is written to determine the factorial. Using this program
you can determine factorial of any number, you don't need to worry about your
compiler's limit (32 bit compiler's integer limit is 2^32-1). Here, I'm not
storing the whole number in a single memory allocation.

If you want to determine factorial of a number having greater than 100 digit
result, i.e., greater than Factorial(70), then please change the size of fac[]
and other related variables.

Carefully note the algorithm, especially when the carry is greater than 9 (it is
not going to a single allocation but to different allocations by several
remainders)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <stdio.h>

main()
{
    int fac[1000], multi, rem, carry = 0, i, j, input, cut = 0;

    printf("Factorial of ");
    scanf("%d", &input);

    for (i = 0; i < 1000; i++)
    {
        fac[i] = 0;
    }
    fac[0] = 1;

    for (j = 1; j <= input; j++)
    {
        carry = 0;
        for (i = 0; i < 1000; i++)
        {
            multi = fac[i] * j + carry;
            rem = multi % 10;
            fac[i] = rem;
            carry = multi / 10;
        }
    }

    for (i = 0; i < 1000; i++)
    {
        if (fac[999 - i] == 0)
            cut = cut + 1;
        else
            break;
    }

    printf("Factorial(%d)=", input);

    for (i = cut; i < 1000; i++)
    {
        printf("%d", fac[999 - i]);
    }
    printf("\n");

    printf("\nPress any key to exit...");
    getch();
}
