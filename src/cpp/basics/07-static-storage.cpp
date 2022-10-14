#include <iostream>
using namespace std;

// variables declared in the file scope are static by default
// and initialized to zero.
int no_of_calls;

void increase_count()
{
    no_of_calls++;
    cout << "The function is called " << no_of_calls << " time(s)" << endl;
}

void increase_count_static()
{
    static int static_no_of_calls = 0;
    // by default static objects are initialized to zero
    // even if we initialize, it will be initialized only once
    static_no_of_calls++;
    cout << "The static function is called " << static_no_of_calls
         << " time(s)" << endl;
}

void increase_count_volatile()
{
    int volatile_no_of_calls = 0;
    volatile_no_of_calls++;
    cout << "The volatile function is called " << volatile_no_of_calls
         << " time(s)" << endl;
}

int main()
{
    increase_count();
    increase_count();
    cout << endl;

    increase_count_static();
    increase_count_static();
    cout << endl;

    increase_count_volatile();
    increase_count_volatile();

    return 0;
}
