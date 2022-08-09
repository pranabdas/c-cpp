#include <stdio.h>
// ./a.out first second
// argv[0] = a.out
// argv[1] = first
// argv[2] = second

int main(int argc, char *argv[]) // argument count, argument vector
{
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}
