// https://www.boost.org/doc/libs/1_80_0/libs/multi_array/doc/user.html
#include "boost/multi_array.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    // Create a 3D array that is 3 x 4 x 2
    typedef boost::multi_array<double, 3> array3d_type; // NumDims = 3
    typedef array3d_type::index index;
    // 2D example
    typedef boost::multi_array<int, 2> array2d_type; // NumDims = 2
    typedef array2d_type::index index;

    array3d_type A(boost::extents[3][4][2]);
    array2d_type B(boost::extents[3][4]);

    // initialize array
    int values = 0;
    for (index i = 0; i < 3; ++i)
    {
        for (index j = 0; j < 4; ++j)
        {
            for (index k = 0; k < 2; ++k)
            {
                A[i][j][k] = values++;
            }
        }
    }

    // initialize B
    for (index i = 0; i < 3; ++i)
    {
        for (index j = 0; j < 4; ++j)
        {
            B[i][j] = (i * 10) + j;
        }
    }

    // print
    for (index i = 0; i < 3; i++)
    {
        for (index j = 0; j < 4; j++)
        {
            for (index k = 0; k < 2; k++)
            {
                cout << "A[" << i << "][" << j << "][" << k << "] = "
                     << A[i][j][k] << endl;
            }
        }
    }

    for (index i = 0; i < 3; ++i)
    {
        for (index j = 0; j < 4; ++j)
        {
            cout << "B[" << i << "][" << j << "] = " << B[i][j] << endl;
        }
    }

    return 0;
}
