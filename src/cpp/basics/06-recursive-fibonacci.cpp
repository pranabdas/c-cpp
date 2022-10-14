#include <iostream>
using namespace std;

long fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
    int lim = 45, i;
    long fib;

    for (i = 0; i < lim; i++)
    {
        fib = fibonacci(i);
        cout << "F(" << i << ") = " << fib << endl;
    }
    
    return 0;
}
