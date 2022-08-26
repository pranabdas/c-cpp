// we will try to put one of our function on a separate header file
// name of the header file is `find-root.h`
// the function is written in the file: `find-root.cpp`
// this programs finds the roots of equation: a * x * x + b * x + c = 0
#include <iostream>
#include <tuple>
#include <cmath>
using namespace std;

// function prototype (definition is provided after main)
tuple<double, double> find_root(double a, double b, double c);

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

tuple<double, double> find_root(double a, double b, double c)
{
    double root, root1, root2;
    root = sqrt(b * b - 4.0 * a * c);
    root1 = -0.5 * (root - b) / a;
    root2 = -0.5 * (root + b) / a;

    return make_tuple(root1, root2);
}
