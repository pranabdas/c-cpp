// Solution of a quadratic equation: a*x^2 + b*x + c = 0
#include <iostream>
#include <cmath>
using namespace std;

// constants representing type of solution
const int NO_SOLUTION = 0;
const int ONE_REAL_SOLUTION = 1;
const int TWO_REAL_SOLUTION = 2;
const int ALL_REALS = 3;
const int NO_REAL_SOLUTION = 4;

int quadratic(double, double, double, double &, double &);
int linear(double, double, double &);

int main()
{
    double a, b, c;
    double root1, root2;
    cout << "This program finds the solutions of a quadratic equation:\n";
    cout << "a*x^2 + b*x + c = 0\n";
    cout << "Please enter the coefficients:\n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    switch (quadratic(a, b, c, root1, root2))
    {
    case TWO_REAL_SOLUTION:
        cout << "Solutions: " << root1 << " and " << root2 << endl;
        break;
    case ONE_REAL_SOLUTION:
        cout << "One real solution: " << root1 << endl;
        break;
    case NO_REAL_SOLUTION:
        cout << "There is no real solution.\n";
        break;
    case NO_SOLUTION:
        cout << "There is no solution to the equation.\n";
        break;
    case ALL_REALS:
        cout << "All real numbers are solutions.\n";
        break;
    default:
        cout << "Some error occurred.\n";
        break;
    }

    return 0;
}

// quadratic: solves the quadratic equation: a*x^2 + b*x + c = 0
// inputs: coefficients a, b, c
// outputs: returns type of solution
//          also updates the solutions using call by reference
//          if there is one solution, it would update only root1
int quadratic(double a, double b, double c, double &root1, double &root2)
{

    if (a != 0) // quadratic
    {
        double root;
        root = b * b - 4 * a * c;
        if (root > 0)
        {
            root1 = (-b + sqrt(root)) / (2 * a);
            root1 = (-b - sqrt(root)) / (2 * a);
            return TWO_REAL_SOLUTION;
        }
        else if (root == 0)
        {
            root1 = -b / (2 * a);
            return ONE_REAL_SOLUTION;
        }
        else
        {
            return NO_REAL_SOLUTION;
        }
    }
    else // linear case
    {
        return linear(b, c, root1);
    }
}

// solution to a linear equation: a*x + b = 0
// Inputs: it takes the coefficients a and b
// Outputs: it returns type of solution
//          it updates the solution using call by reference
int linear(double a, double b, double &root)
{
    if (a != 0)
    {
        root = -b / a;
        return ONE_REAL_SOLUTION;
    }
    else if (b == 0)
    {
        return ALL_REALS;
    }
    else
    {
        return NO_SOLUTION;
    }
}
