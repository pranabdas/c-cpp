#include <stdio.h>
// #define NDEBUG
// assert can be turned off by #define NDEBUG before assert.h
// or compile using: gcc -DNDEBUG file.c
#include <assert.h>

int main()
{
    int age;
    printf("How old are you? ");
    scanf("%d", &age);

    assert(age > 0);
    printf("My code runs.\n");
    return 0;
}
