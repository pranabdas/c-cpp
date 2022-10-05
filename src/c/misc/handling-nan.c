#include <stdio.h>
#include <math.h> // isnan

int main()
{
    double result = 0 / 0.0; // dividing by 0 (integer) shows gcc warning

    if (isnan(result)) // isnan requires real (float, double) argument
    {
        printf("result is NaN\n");
    }

    return 0;
}
