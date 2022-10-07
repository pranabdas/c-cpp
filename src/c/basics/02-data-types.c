#include <stdio.h>

int main()
{
    unsigned int u_num = 8;
    printf("Unsigned integer: %u\n", u_num);

    int num = -9;
    printf("Integer: %d\n", num);

    long int large_num = 3988764563425;
    printf("Large integer: %ld\n", large_num);

    float num_f = 3.14159;
    printf("Float: %f\n", num_f);

    double num_d = 3.141592653589793;
    printf("Double precision float: %16.15f\n", num_d);

    char c = 'a'; // char data type must be wrapped in single quotes
                  // double quote in c/c++ denotes string literal which is an
                  // array of char with null terminator (\0)
    printf("Char: %c\n", c);
    printf("ASCII value of char: %d\n", c);
    printf("char corresponding to ascii value 98: %c\n", 98);

    char message[] = "Hello"; // string literal
                              // same as {'H', 'e', 'l', 'l', 'o', '\0'}
    printf("String: %s\n", message);

    return 0;
}
