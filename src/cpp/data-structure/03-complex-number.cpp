#include <iostream>
#include <complex>
using namespace std;

int main()
{
    complex<double> z(2.0, 3.0); // declare complex number: 2 + 3i

    // real and imaginary parts
    cout << "Real part: " << real(z) << endl;
    cout << "Imaginary part: " << imag(z) << endl;

    // absolute value
    cout << "Absolute value of " << z << " is " << abs(z) << endl;

    // norm
    cout << "Norm of " << z << " is " << norm(z) << endl;

    // complex conjugate
    cout << "Complex conjugate of " << z << " is " << conj(z) << endl;

    complex<double> z2(3.0, 4.0);
    cout << z << " + " << z2 << " = " << z + z2 << endl;
    cout << z << " * " << z2 << " = " << z * z2 << endl;

    return 0;
}
