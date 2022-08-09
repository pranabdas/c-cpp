#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct person
    {
        char name[32];
        int age;
    } president = {
        "Barack Obama",
        61};

    printf("President %s is %d years old.\n", president.name, president.age);

    struct person *prez;
    prez = &president;

    printf("President %s is %d years old.\n", prez->name, prez->age);
    return 0;
}
