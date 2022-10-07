#include <stdio.h>

int main()
{
    int input1, input2, sum;

    printf("Enter input 1: ");
    scanf("%d", &input1);

    printf("Enter input 2: ");
    scanf("%d", &input2);

    sum = input1 + input2;

    printf("%d + %d = %d\n", input1, input2, sum);

    return 0;
}
