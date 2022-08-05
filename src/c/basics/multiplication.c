/* ============================================================================
File: Multiplication.c
Author: Pranab Das (GitHub: @pranabdas)
Creation: 09-Mar-2015

Purpose: This program is written in order to perform simple multiplication of
two (interger) numbers. The program asks for two number, and performs
multiplication, and prints the result in the screen.
=============================================================================*/

/* NOTE: It is always good idea to write comment in your program. To do this
use "slash star" and close comment by "star slash". Anything you write in
between "slash star" and "star slash", the complier will ignore. It is for
your understanding, and it will let others understand what you have done
when he/she needs to modify or extend your program. */

#include <stdio.h>
#include <stdlib.h>

main()
{

    int input1, input2, mult; /* Define the variables */

    /* Just to make the program less robot-like, let's print a introduction line. */

    printf("Howdy! I will multiply two numbers for you.\n");

    /* NOTE: Use "\n" to move to new line in the output window when the program
    will execute. */

    /* Ask the user for the first number, and read/scan the number and store in
    the variable "input1". */

    printf("Please enter the first number: ");
    scanf("%d", &input1);

    /* Ask the second number (multiplier), and store in the variable "input2". */

    printf("Thanks! Now enter the second number: ");
    scanf("%d", &input2);

    /* Perform the multiplication */

    mult = input1 * input2;

    /* NOTE: The computer itself is not intelligent enough to do the multiplication
    itself. It requires to instruct very precisely every simple operation. But
    luckily in the header "stdio.h" the instruction for simple operations like
    multiplication is already written. Later we will include many other headers
    when we will do more advanced tasks. */

    /* Finally, print the output in the screen. */

    printf("Result: %d X %d = %d\n", input1, input2, mult);
    system("PAUSE");
}
