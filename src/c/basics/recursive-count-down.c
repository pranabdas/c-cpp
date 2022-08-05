/*=============================================================================
Program: simple recursion
Author: Pranab Das (GitHub: @pranabdas)
Date: 04-Aug-2022
=============================================================================*/
#include <stdio.h>

void count_down(int num)
{
    if (num < 0)
        printf("Blast off!\n");
    else
    {
        printf("%d\n", num);
        count_down(num - 1);
    }
}

int main()
{
    int num;
    printf("Enter time to count down: ");
    scanf("%d", &num);
    count_down(num);
    return 0;
}
