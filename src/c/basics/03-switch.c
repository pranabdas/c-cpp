#include <stdio.h>

int main()
{
    int age = 0, category;

    printf("Please enter your age in years: ");
    scanf("%d", &age);

    if (age < 0)
        category = 0;
    else if (age <= 18)
        category = 1;
    else if (age < 65)
        category = 2;
    else
        category = 3;

    switch (category)
    {
    case 0:
        printf("Invalid age.\n");
        break;
    case 1:
        printf("You are not an adult.\n");
        break;
    case 2:
        printf("You are an adult.\n");
        break;
    case 3:
        printf("You are a senior citizen.\n");
        break;

    default:
        printf("Should not be necessary here.\n");
        break;
    }

    return 0;
}
