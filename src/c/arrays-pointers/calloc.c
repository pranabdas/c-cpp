#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *storage;
    int i;
    storage = (int *)calloc(5, sizeof(int)); 
    // this allocates and initializes. for numeric variable it initializes  
    // with 0, otherwise NULL;

    if (storage == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }
    puts("Memory allocated.");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(storage + i));
    }

    storage = (int *)realloc(storage, sizeof(int) * 10);
    // this copies the contents from earlier storage variable 
    // however extra storage is not initialzed
    if (storage == NULL)
    {
        fprintf(stderr, "Memory reallocation failed.\n");
        exit(1);
    }
    puts("Memory reallocated.");

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", *(storage + i));
    }

    // let's put some values
    for (i = 0; i < 10; i++)
    {
        *(storage + i) = i * 2 + 3;
        printf("%d\n", *(storage + i));
    }

    return 0;
}
