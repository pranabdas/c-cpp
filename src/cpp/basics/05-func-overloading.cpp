// multiple functions can have same name provided they have different numbers of
// arguments or different argument type. function signature not only on their
// names but also on arguments
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return (a + b);
}

int add(int a, int b, int c)
{
    return (a + b + c);
}

float add(float a, float b)
{
    return (a + b);
}

int main()
{
    int a = 2, b = 4, c = 5;
    float d = 3.2, e = 4.5;

    cout << a << " + " << b << " = " << add(a, b) << endl;
    cout << a << " + " << b << " + " << c << " = " << add(a, b, c) << endl;
    cout << d << " + " << e << " = " << add(d, e) << endl;

    return 0;
}
