// example of call by reference function
#include <iostream>
using namespace std;

// Important: here the & is reference declarator and simply means that the
// function arguments are to be passed by reference. There is no direct
// connection with the address-of operator and in no sense does taking the
// address of x give the double type.

// If a function argument that is passed by reference does not get modified by 
// that function, then it is worth using the const specifier.
// void fn(const float &x);
inline void swap(int &i, int &j)
{
    int temp = i;
    i = j;
    j = temp;
}

// we can use function with same name as long as the signature differs for two
// definitions and the calls are differentiable by different input types
inline void swap(double &i, double &j)
{
    double temp = i;
    i = j;
    j = temp;
}

int main()
{
    int m = 5, n = 6;
    cout << "Inputs: " << m << ", " << n << endl;

    // always be extra careful with functions that has call by reference
    // it can modify values in the calling environment. Use it only when
    // strictly necessary. This can be used to avoid large data rewrite.
    // It is also used in cases, where the function needs to return multiple
    // values. We can use call by reference to update the variables with
    // appropriate values in the calling environment (say in the main), instead
    // of returning values. Alternatively, we can return tuple which can hold
    // multiple values.
    swap(m, n);
    cout << "Outputs: " << m << ", " << n << endl;

    double x = 5.4, y = 1.2;
    cout << "Inputs: " << x << ", " << y << endl;
    swap(x, y);
    cout << "Outputs: " << x << ", " << y << endl;
}
