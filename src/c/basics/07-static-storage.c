#include <stdio.h>

// variables declared in the file scope are static
int global_var = 0;

void increase_global_var()
{
    global_var++;
    printf("global var called %d times\n", global_var);
}

void increase_static_var()
{
    // static variable are initialized to 0, and initialized once
    static int static_var = 0;
    static_var++;
    printf("static var called %d times\n", static_var);
}

void increase_local_var()
{
    int local_var = 0;
    local_var++;
    printf("local var called %d times\n", local_var);
}

int main()
{
    increase_global_var();
    increase_global_var();

    increase_static_var();
    increase_static_var();
    
    increase_local_var();
    increase_local_var();
    
    return 0;
}
