// we will try to put one of our function on a separate header file
// name of the header file is `find-root.h`
// the function is written in the file: `find-root.cpp`
// this programs finds the roots of equation: a * x * x + b * x + c = 0
// compile the program: g++ header-func.pp find-root.cpp
#include <iostream>
#include "find-root.h"
using namespace std;

int main()
{
    double a, b, c;

    cout << "This programs finds roots of a * x * x + b * x + c = 0\n";
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (b * b < 4 * a * c)
    {
        cout << "This equation has no real root.\n";
        return 0;
    }

    double root1, root2;
    tie(root1, root2) = find_root(a, b, c);

    cout << "The root the equation are:\n";
    cout << "root1 = " << root1 << endl;
    cout << "root2 = " << root2 << endl;

    return 0;
}
