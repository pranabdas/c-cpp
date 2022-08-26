#include <iostream>
using namespace std;

class complex
{
public:
    complex(double x = 0.0, double y = 0.0)
    {
        re = x;
        im = y;
    }

    double real(void);
    double img(void);
    // friend has access to private members
    friend complex operator+(const complex &, const complex &);

private:
    double re, im;
};

double complex::real(void)
{
    return re;
}

double complex::img(void)
{
    return im;
}

complex operator+(const complex &z, const complex &w)
{
    return complex(z.re + w.re, z.im + w.im);
}

int main()
{
    complex u = complex(1.0, 2.5);
    complex v = complex(2.0, 1);
    complex w = u + v;

    cout << "u = (" << u.real() << ", " << u.img() << ")\n";
    cout << "v = (" << v.real() << ", " << v.img() << ")\n";
    cout << "w = (" << w.real() << ", " << w.img() << ")\n";

    return 0;
}
