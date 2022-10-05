#include <stdio.h>
#include <stdlib.h> // malloc

int main()
{
    void *chunk; // no data type declared
    chunk = malloc(1024);

    if (chunk == NULL)
    {
        puts("Memory allocation failed!\n");
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }
    else
    {
        printf("1024 bytes of memory allocated at %p\n", chunk);
        free(chunk); // this frees the memory even when program runs
        // buffer is always cleared when the program exits therefore it is
        // unnecessary to free the buffer just before program exits
        chunk = NULL; // it is always recommended to set the pointer to NULL
                      // after buffer is freed
    }

    return 0;
}
