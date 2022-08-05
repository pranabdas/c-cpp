/*=============================================================================
Program: function
Author: Pranab Das (GitHub: @pranabdas)
Date: 04-Aug-2022
=============================================================================*/
#include <stdio.h>

void write_very(int count)
{
    while (count > 0)
    {
        printf("very ");
        count--;
    }
}

int main()
{
    int repeat = 0;

    printf("How much do you love (1-5)? ");
    scanf("%d", &repeat);
    if (repeat > 5)
        repeat = 5;
    else if (repeat < 0)
        repeat = 0;

    printf("I love you ");
    write_very(repeat);
    printf("very much.\n");

    return 0;
}
