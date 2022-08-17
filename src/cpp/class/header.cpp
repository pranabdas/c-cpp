#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    complex z = complex(1.2, 4.5);

    cout << "Real part: " << z.real() << endl;
    cout << "Imaginary part: " << z.img() << endl;

    return 0;
}
