/*=============================================================================
Program: logical operation
Author: Pranab Das (GitHub: @pranabdas)
Date: 04-Aug-2022
=============================================================================*/

#include <stdio.h>

int main()
{
    int outside, weather;

    printf("Are you going outside (0 for false, 1 for true)? ");
    scanf("%d", &outside);

    printf("Is it raining (0 for false, 1 for true)? ");
    scanf("%d", &weather);

    if (outside && weather)
        // note that if outside is false, next part is not evaluated
        printf("Please carry umbrella.\n");
    else
        printf("Dress normally.\n");

    return 0;
}
