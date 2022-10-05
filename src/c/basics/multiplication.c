/* ============================================================================
File: Multiplication.c
Author: Pranab Das (GitHub: @pranabdas)
Creation: 09-Mar-2015

Purpose: This program is written in order to perform simple multiplication of
two (integer) numbers. The program asks for two number, and performs
multiplication, and prints the result in the screen.
=============================================================================*/

/* NOTE: It is always good idea to write comment in your program. To do this
use "slash star" and close comment by "star slash". Anything you write in
between "slash star" and "star slash", the complier will ignore. It is for
your understanding, and it will let others understand what you have done
when he/she needs to modify or extend your program. */

#include <stdio.h>

int main()
{

    int input1, input2, mult; /* Define the variables */
    printf("This program multiplies two integer numbers.\n");

    /* NOTE: Use "\n" to move to new line in the output window when the program
    will execute. */

    /* Ask the user for the first number, and read/scan the number and store in
    the variable "input1". */
    printf("Please enter the first number: ");
    scanf("%d", &input1);

    /* Ask the second number (multiplier), and store in the variable "input2".*/
    printf("Thanks! Now enter the second number: ");
    scanf("%d", &input2);

    /* Perform the multiplication */
    mult = input1 * input2;

    /* Finally, print the output in the screen. */
    printf("Result: %d * %d = %d\n", input1, input2, mult);
    
    return 0;
}
