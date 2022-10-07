#include <stdio.h>

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

    while (repeat > 0)
    {
        printf("very ");
        repeat--;
    }

    printf("very much.\n");

    return 0;
}
