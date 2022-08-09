#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct person
    {
        char *name;
        int *age;
    } * president;

    // allocate struct memory
    president = (struct person *)malloc(sizeof(struct person) * 1);
    if (president == NULL)
    {
        fprintf(stderr, "Failed to allocate memory.\n");
        exit(1);
    }

    // allocate structure members
    president->name = (char *)malloc(sizeof(char) * 32);
    president->age = (int *)malloc(sizeof(int) * 1);

    if (president->name == NULL || president->age == NULL)
    {
        fprintf(stderr, "Failed to allocate memory.\n");
        exit(1);
    }

    // assign structure members
    strcpy(president->name, "Barack Obama");
    printf("How old is %s? ", president->name);
    scanf("%d", president->age);

    printf("President %s is %d years old.\n", president->name, *president->age);

    return 0;
}
