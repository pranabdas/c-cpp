#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct user
    {
        char *name;
        int *age;
    } user1;

    char user_name[] = "Pranab";
    printf("%p\n", user_name); // notice this is a pointer address
    user1.age = (int *)malloc(sizeof(int) * 1);
    if (user1.age == NULL)
    {
        fprintf(stderr, "Allocation failed.\n");
        exit(1);
    }

    *user1.age = 35;
    user1.name = user_name; // in case of a character pointer * is not required
    // user1.name does not access its value but the address

    printf("User name: %s\nAge: %d\n", user1.name, *user1.age);
    return 0;
}
