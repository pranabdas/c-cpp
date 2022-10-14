// buggy program: stop program by pressing [ctrl] + c
#include <stdio.h>

int main()
{
    unsigned int i;  // unsigned integer
    const int SIZE = 5;

    for (i = SIZE; i >= 0; i--) // things goes wrong when we decrease unsigned
                                // integer below 0, it becomes a very large
                                // positive number
    {
        printf("%u\n", i);
    }

    printf("Blast off!\n");

    return 0;
}
