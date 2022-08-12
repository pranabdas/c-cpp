#include <iostream>
using namespace std;

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
    swap(m, n);
    cout << "Outputs: " << m << ", " << n << endl;

    double x = 5.4, y = 1.2;
    cout << "Inputs: " << x << ", " << y << endl;
    swap(x, y);
    cout << "Outputs: " << x << ", " << y << endl;
}
