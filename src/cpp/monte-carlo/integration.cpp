// Monte carlo method of integration
// calculate area under the curve y = x^2 within x limits [1, 3]
#include <iostream>
#include <cmath>   // pow
#include <cstdlib> // rand
using namespace std;

int main()
{
    double x_lower = 1;
    double x_upper = 3;
    int iterations = 1000000;

    double y_lower = 0;
    double y_upper = pow(x_upper, 2);
    double area_rect = y_upper * (x_upper - x_lower);

    int total_area = 0;
    int monte_area = 0;
    double result = 0;

    for (int i = 0; i < iterations; i++)
    {
        double x, y;
        x = rand() % 1000; // generate random integer upto 1000
        y = rand() % 1000;

        x = x / 1000; // scale the numbers to [0, 1]
        y = y / 1000;

        x = x_lower + x * (x_upper - x_lower);
        y = y_lower + y * (y_upper - y_lower);

        // this check is unnecessary since all points are bound be in this range
        if (x >= x_lower && x <= x_upper)
        {
            total_area += 1;

            if (y <= pow(x, 2))
            {
                monte_area += 1;
            }
        }
    }

    if (total_area != 0)
    {
        result = area_rect * monte_area / total_area;
    }

    cout << "Area = " << result << endl;
    cout << "Analytical result = " << (27.0 - 1) / 3 << endl;

    return 0;
}
