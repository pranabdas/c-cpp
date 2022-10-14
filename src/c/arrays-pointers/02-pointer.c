#include <stdio.h>

int main()
{
    char a;
    char *ptr; // declare a pointer for char type
    a = 'A';
    printf("Value of variable a: %c\n", a);
    printf("Size of variable a: %lu byte(s)\n", sizeof(a));

    // now assign the address of variable a to pointer
    ptr = &a;
    printf("Address of ptr: %p\n", ptr); // address of pointer
    printf("Value of ptr: %c\n", *ptr);  // value of pointer

    int b = 456;
    int *ptr_b;
    ptr_b = &b;
    printf("\nValue of variable b: %d\n", b);
    printf("Address of variable b: %p\n", ptr_b);
    printf("Size of variable a: %lu byte(s)\n", sizeof(b));

    double c = 4.56;
    double *ptr_c;
    ptr_c = &c;
    printf("\nValue of variable c: %g\n", c);
    printf("Address of variable c: %p\n", ptr_c);
    printf("Size of variable a: %lu byte(s)\n", sizeof(c));

    return 0;
}
