// also see complex.h
#include <stdio.h>

int main()
{
    _Complex float z = 4.0 + 3.0i;

    printf("Real part = %f\n", __real__(z));
    printf("Imaginary part = %f\n", __imag__(z));
    
    // complex conjugate
    _Complex float conj_z = ~z;
    printf("Conjugate = (%f, %f)\n", __real__(conj_z), __imag__(conj_z));

    return 0;
}