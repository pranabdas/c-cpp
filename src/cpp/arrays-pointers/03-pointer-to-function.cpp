#include <iostream>
using namespace std;

int square(int x)
{
    return (x * x);
}

int cube(int x)
{
    return (x * x * x);
}

// int (*f)(int x) : is a pointer to a function that takes int input and returns
// int as well
// double (*f)() : takes no input, returns double
int sum(int (*f)(int x), int lim)
{
    int total = 0;

    for (int i = 1; i <= lim; i++)
    {
        total += (*f)(i); // dereferencing is optional
        // total += f(i);
    }

    return total;
}

int sum_alt(int f(int x), int lim)
{
    int total = 0;

    for (int i = 1; i <= lim; i++)
    {
        total += f(i);
    }

    return total;
}

int main()
{
    cout << "square[0, 10] = " << sum(square, 10) << endl;
    cout << "cube[0, 10] = " << sum(cube, 10) << endl;

    cout << "square_alt[0, 10] = " << sum_alt(square, 10) << endl;
    cout << "cube_alt[0, 10] = " << sum_alt(cube, 10) << endl;

    return 0;
}
