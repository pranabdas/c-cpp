#include <stdio.h>

int main()
{
    struct loc
    {
        double lat;
        double lon;
    } p1 = {1.1123, 86.9876};

    printf("latitude of p1: %g\n", p1.lat);

    // alternative way to access members of a struct
    struct loc *ptr = &p1;
    printf("longitude of p1: %g\n", ptr->lon);

    // another way
    typedef struct
    {
        float age;
        char gender;
    } user;

    user user1 = {34.0, 'm'};

    printf("user1 age: %g\n", user1.age);

    return 0;
}
