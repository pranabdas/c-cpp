/*------------------------------------------------------------------------*
 * File Name: matrix_multiplication.c
 * Creation: 6th November, 2008
 * Author: Pranab Das (GitHub: @pranabdas)
 *-----------------------------------------------------------------------*/

///////////////////////////////////////////////////////////////////////////
//                         -: PURPOSE :-
// Matrix Multiplication: To multiply two matrix of any dimensions(but less
// than 10 for this program), provided the multiplication is possible and
// the matrix entries are integer.
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    int a, b, c, d, i, j, k;
    double x[10][10], y[10][10], z[10][10];

    printf("Enter the dimensions of the first  matrix (m n): ");
    scanf("%d %d", &a, &b);
    printf("Enter the dimensions of the second matrix (n p): ");
    scanf("%d %d", &c, &d);

    if (b == c)
    {
        printf("\nEnter the elements of the first matrix:\n");
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                printf("X[%d][%d] = ", i + 1, j + 1);
                scanf("%lg", &x[i][j]);
            }
        }

        printf("\nNow enter the elements of the second matrix:\n");
        for (i = 0; i < c; i++)
        {
            for (j = 0; j < d; j++)
            {
                printf("Y[%d][%d] = ", i + 1, j + 1);
                scanf("%lg", &y[i][j]);
            }
        }

        printf("\nAns =\n\n");

        for (i = 0; i < a; i++)
        {
            for (j = 0; j < d; j++)
            {
                z[i][j] = 0;
                for (k = 0; k < b; k++)
                {
                    z[i][j] = z[i][j] + x[i][k] * y[k][j];
                }
                printf("%lg\t", z[i][j]);
            }
            printf("\n\n");
        }
    }
    else
    {

        printf("\nSorry!!! This multiplication is not possible.\n");
        printf("??? Inner matrix dimensions must agree.\n");
    }
    
    return 0;
}
