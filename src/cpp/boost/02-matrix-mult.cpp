// https://www.boost.org/doc/libs/1_80_0/libs/numeric/ublas/doc/index.html
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <iostream>
using namespace boost::numeric::ublas;
using std::cout;
using std::endl;

void print_mat2d(matrix<double>);

int main()
{
    matrix<double> A(3, 4);
    matrix<double> B(4, 3);
    vector<double> x(4);

    for (unsigned i = 0; i < A.size1(); ++i)
    {
        for (unsigned j = 0; j < A.size2(); ++j)
        {
            A(i, j) = (10 * i) + j;
        }
    }

    for (unsigned i = 0; i < B.size1(); ++i)
    {
        for (unsigned j = 0; j < B.size2(); ++j)
        {
            B(i, j) = i + (j * 2);
        }
    }

    for (unsigned i = 0; i < x.size(); ++i)
    {
        x(i) = 1.25;
    }

    auto C = prod(A, B);
    auto D = prod(A, x);

    cout << "A =\n";
    print_mat2d(A);

    cout << "\nB =\n";
    print_mat2d(B);

    cout << "\nC (=AB) =\n";
    print_mat2d(C);

    cout << "\nD = [";
    for (unsigned i = 0; i < D.size(); ++i)
    {
        cout << D(i);

        if (i < (D.size() - 1))
        {
            cout << ", ";
        }
        else
        {
            cout << "]" << endl;
        }
    }
}

void print_mat2d(matrix<double> m)
{
    for (unsigned i = 0; i < m.size1(); i++)
    {
        for (unsigned j = 0; j < m.size2(); j++)
        {
            cout << m(i, j) << "\t";
        }

        cout << endl;
    }
}
