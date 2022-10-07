#include <stdio.h>

int main()
{
    int age = 0;

    printf("Please enter your age in years: ");
    scanf("%d", &age);

    (age <= 18) ? printf("You are not an adult.\n") : (age < 65) ? printf("You are an adult.\n")
                                                                 : printf("You are a senior citizen.\n");

    return 0;
}
