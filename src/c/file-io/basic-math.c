#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ii;
    double theta, result1, result2;

    FILE *fp;
    fp = fopen("results.dat", "w");

    for (ii = 0; ii < 100; ii++)
    {

        theta = 4 * 3.14 * ii / 100;

        if (theta == 0) // To avoid the 0/0 situation
        {
            theta = 0.000001;
        }

        result1 = sin(theta) / theta;
        result2 = sin(2 * theta) / theta;

        // printf("%f\t%f\n", theta, result);
        fprintf(fp, "%f\t%f\t%f\n", theta, result1, result2);
    }
    fclose(fp);
}
