/*=============================================================================
Program: Size of various types
Author: Pranab Das (GitHub: @pranabdas)
Date: 04-Aug-2022
=============================================================================*/

#include <stdio.h>

int main()
{
    char ch = 't';
    short short_a = 5;
    short int short_b = 5; // here both a and b assignments are equivalent
    unsigned unsigned_a = 6;
    unsigned int unsigned_b = 66;
    long long_a = 6666l;

    printf("Size of short = %d bytes\n", sizeof(short_a));
    printf("Size of unsigned = %d bytes\n", sizeof(unsigned_b));
    printf("Size of int = %d bytes\n", sizeof(int));
    printf("Size of long int = %d bytes\n", sizeof(long int));
    printf("Size of float = %d bytes\n", sizeof(float));
    printf("Size of double = %d bytes\n", sizeof(double));
    printf("Size of long double = %d bytes\n", sizeof(long double));
    /* float has 6 significant digits, while double and long double have 15 and
    31, respectively. float ranges are 1e-38 to 1e+38, both double and long double
    both have range 1e-308 to 1e+308.
    To print output in exponet we can use %e or %g which will automatically decide
    between %f or %e */
    printf("Size of char = %d bytes\n", sizeof(char));
    printf("Size of ch = %d bytes\n", sizeof(ch));
    return 0;
}
