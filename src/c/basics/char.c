/*=============================================================================
Program: char
Author: Pranab Das (GitHub: @pranabdas)
Date: 04-Aug-2022
=============================================================================*/

#include <stdio.h>

int main()
{
    char ch = 'a';

    printf("a in ASCII is %d\n", ch);
    // similarly we can print ascii equivalent of a number
    printf("67 as char is %c\n", 67);
    printf("Print char %c\n", ch);
    printf("%c %c %c\n", ch, ch + 1, ch + 2);
    return 0;
}
