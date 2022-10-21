// find out value of pi by calculating area of circle by monte carlo method
// area of circle = pi * r^2
// area of enclosing rectangle = (2 * r)^2
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int iterations = 1'000'000;
    double x_lower = -1.0;
    double y_lower = -1.0;
    double x_upper = 1.0;
    double y_upper = 1.0;
    double monte_area = 0;

    for (int i = 0; i < iterations; i++)
    {
        double x, y;
        x = rand() % 1000; // generate random integer upto 1000
        y = rand() % 1000;

        x = x / 1000; // scale the numbers to [0, 1]
        y = y / 1000;

        x = x_lower + x * (x_upper - x_lower);
        y = y_lower + y * (y_upper - y_lower);

        if (x * x + y * y < 1)
        {
            monte_area += 1;
        }
    }

    // pi = 4 * area_circ / area_rect = 4 * monte_area / iterations
    cout << "pi = " << 4 * monte_area / iterations << endl;
    cout << "actual value = " << 4 * atan(1) << endl;

    return 0;
}
