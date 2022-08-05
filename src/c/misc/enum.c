/*=============================================================================
Program: enum
Author: Pranab Das (GitHub: @pranabdas)
Date: 05-Aug-2022
=============================================================================*/

#include <stdio.h>

enum day
{
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
};

// if you do not want to avoid the keyword enum all the time
// typedef enum day day;
// now we can write 'day today FRI;' instead of 'enum day today FRI;

void print_day(enum day d)
{
    switch (d)
    {
    case SUN:
        printf("Sunday");
        break;
    case MON:
        printf("Monday");
        break;
    case TUE:
        printf("Tuesday");
        break;
    case WED:
        printf("Wednesday");
        break;
    case THU:
        printf("Thursday");
        break;
    case FRI:
        printf("Friday");
        break;
    case SAT:
        printf("Saturday");
        break;
    default:
        printf("Something went wrong!");
        break;
    }
}

enum day tomorrow(enum day d)
{
    // internally enum evaluates the index only
    return ((d + 1) % 7);
}

int main()
{
    enum day today = FRI;
    printf("Today is ");
    // we can not format enum day type
    print_day(FRI);
    printf(".\n");

    printf("Tomorrow is ");
    print_day(tomorrow(today));
    printf(".\n");
    return 0;
}
