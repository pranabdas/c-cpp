#ifndef COMPLEX_H // inclusion guard to prevent multiple inclusions
#define COMPLEX_H

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

#endif
