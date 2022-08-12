#include <iostream>
#include <cstdarg>
using namespace std;

double average(const int size, ...)
{
    va_list ap; // argument pointer
    double total = 0.0;

    va_start(ap, size);
    for (int i = 0; i < size; ++i)
    {
        total += va_arg(ap, double);
    }
    va_end(ap);

    return (total / size);
}

int main()
{
    double avg = average(5, 0.5, 2.0, 3.0, 4.0, 5.5);
    cout << avg << endl;
    return 0;
}
