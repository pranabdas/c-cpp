#include <iostream>
#include <eigen3/Eigen/Dense>
using namespace std;
using Eigen::MatrixXd;
using Eigen::VectorXd;

int main()
{
    MatrixXd m(2, 2);
    m(0, 0) = 1;
    m(0, 1) = 2.5;
    m(1, 0) = -3;
    m(1, 1) = 4;

    cout << "Matrix m:\n";
    cout << m << endl;

    // create a random matrix
    MatrixXd A = MatrixXd::Random(3, 3);
    cout << "\nMatrix A:\n";
    cout << A << endl;

    VectorXd b = VectorXd::Random(3);
    cout << "\nVector b:\n";
    cout << b << endl;

    cout << "\nA * b =\n"
         << A * b << endl;

    return 0;
}
