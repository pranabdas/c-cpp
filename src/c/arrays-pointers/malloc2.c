#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *storage;
    storage = (char *)malloc(sizeof(char) * 15 + 1);

    if (storage == NULL)
    {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }
    else
    {
        printf("Memory allocated for 15 char (+ 1 for end of line char)\n");
    }

    return 0;
}
