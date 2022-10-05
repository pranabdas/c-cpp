// https://www.gnu.org/software/libc/manual/html_node/Formatted-Output.html
#include <stdio.h>

int main()
{
    unsigned int u_num = 9;
    printf("Unsigned number = %u\n", u_num);

    int num = 6;
    printf("Signed integer = %d\n", num);
    printf("Integer with specified width: %4d\n", num);
    // specifies the minimum width, if the number exceeds specified width, it
    // will take up more width

    float f_num = 3.4;
    printf("Float = %f\n", f_num);
    printf("With specified width: %8.4f\n", f_num);
    // %w.nf, where w is the minimum width, n is the number of digits after
    // decimal point
    printf("Exponential formatting: %e\n", f_num);
    // %g can be used to automatically select between %f and %e

    int *ptr_num;
    ptr_num = &num;
    printf("Pointer address: %p\n", ptr_num);

    char city[] = "Singapore";
    printf("char: %s\n", city);
    printf("Specified width: %12s\n", city);
    printf("Specified width and visibility: %6.3s\n", city);
    printf("With set visibility only: %.3s\n", city);

    return 0;
}
