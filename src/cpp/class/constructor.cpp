#include <iostream>
using namespace std;

class Complex
{
public:
    // constructor function has the same name as class
    // it cannot have return value, not even void
    // there can be multiple constructor, differs by number of arguments
    // a constructor without any argument is called default constructor
    Complex(); // default constructor

    Complex(double x, double y) // another constructor, we could provide default
                                // values to constructor arguments as well,
                                // however doing so in this case would make it
                                // ambiguous with the default constructor
                                // Complex(double x = 0.0, double y = 0.0)
    {
        re = x;
        im = y;
    } // inline declaration
    
    // destructor: there can only be one destructor
    // have no arguments, and return values. It frees up the memory/resources.
    ~Complex();

    void print(void);

private:
    double re, im;
};

Complex::Complex() // default constructor
{
    re = 0.0;
    im = 0.0;
}

Complex::~Complex() // destructor
{
    // for now we will just print something see when the destructor is called
    // it will be called when delete heap allocation for dynamic objects, 
    // or function/program exits in case of stack allocations
    cout << "Destructure is called.\n";
}

void Complex::print(void)
{
    cout << "(" << re << ", " << im << ")\n";
}

int main()
{
    Complex u = Complex(1.5, 2.0);
    Complex v(3.0, 1.7);
    Complex w; // both real and imaginary parts are initialized to 0.0

    u.print();
    v.print();
    w.print();

    // create a new complex object in the heap/free store
    Complex *ptr_z = new Complex(3, 5);
    ptr_z->print(); // alternative: (*ptr_z).print();

    cout << "Deleting heap allocation : ";
    delete ptr_z;
    ptr_z = nullptr;

    return 0;
}
