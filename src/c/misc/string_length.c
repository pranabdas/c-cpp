#include <stdio.h>

int main()
{
    char message[] = "hello";
    int i = 0;
    for (;; i++) // notice the null statement `;`, we have no loop
                 // initialization or condition check in our for loop, the loop
                 // is exited with `break;` statement
    {
        if (!message[i]) // string literal is stored as array with the end
                         // denoted by `\0`, we keep on checking each character
                         // until we have reached `\0`
        {
            printf("Length = %d\n", i);
            break;
        }
    }

    // we can implement using `while` loop as well
    i = 0;
    while (message[i])
    {
        i++;
    }

    printf("Length (while loop implementation) = %d\n", i);

    return 0;
}
