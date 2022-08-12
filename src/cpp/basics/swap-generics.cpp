#include <iostream>
using namespace std;

template <class T>

inline void swap_numbers(T &i, T &j) 
// there is a conflicting naming swap in namespace std
{
    T temp = i;
    i = j;
    j = temp;
}

int main()
{
    int m = 5, n = 6;
    cout << "Inputs: " << m << ", " << n << endl;
    swap_numbers(m, n);
    cout << "Outputs: " << m << ", " << n << endl;

    double x = 5.4, y = 1.2;
    cout << "Inputs: " << x << ", " << y << endl;
    swap_numbers(x, y);
    cout << "Outputs: " << x << ", " << y << endl;
}
