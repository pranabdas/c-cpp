#include <tuple>
#include <cmath>
#include "find-root.h"
using namespace std;

tuple<double, double> find_root(double a, double b, double c)
{
    double root, root1, root2;
    root = sqrt(b * b - 4.0 * a * c);
    root1 = -0.5 * (root - b) / a;
    root2 = -0.5 * (root + b) / a;

    return make_tuple(root1, root2);
}
