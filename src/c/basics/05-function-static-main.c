// compile: gcc 05-function-static-main.c 05-function-static.c
// Alternatively: gcc -c 05-function-static.c
//                gcc 05-function-static-main.c 05-function-static.o
#include <stdio.h>

extern int get_area(int, int); // prototype can be declared with out `extern`,
                               // compiler treats is as `extern` even without
                               // the extern keyword
// int calc_area(int, int);

int main()
{
    int width = 1280;
    int height = 800;

    printf("Area = %d\n", get_area(width, height));
    // printf("Area = %d\n", calc_area(width, height));
    // undefined reference to `calc_area`, as defined with static keyword

    return 0;
}
