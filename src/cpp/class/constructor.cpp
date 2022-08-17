#include <iostream>
using namespace std;

class complex
{
public:
    // constructor function has the same name as class
    complex(double x = 0.0, double y = 0.0)
    {
        re = x;
        im = y;
    }

    void print(void);

private:
    double re, im;
};

void complex::print(void)
{
    cout << "(" << re << ", " << im << ")\n";
}

int main()
{
    complex u = complex(1.5, 2.0);
    complex v(3.0, 1.7);
    complex w; // both real and imaginary parts are initialized to 0.0

    u.print();

    return 0;
}
