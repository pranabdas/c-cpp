#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 54;
    // we can declare and assign in the same line
    // double *pi_pt = new double(3.14159);

    // in case of program that is allocating a lot of dynamic memory, it is
    // possible to exhaust the heap (free store) memory. In such cases the
    // new operator won't be able to assign memory. We can check such failures

    // float *pt = new float(3.1415926);
    // if (pt == 0) {
    //     cout << "Failed to allocate memory for pt.\n";
    //     exit(1);
    // }

    // however the above is not necessary for ANSI C++ compliant compiles will
    // throw a system error and terminate the program

    cout << "Address ptr: " << ptr << endl;          // it is a heap memory address
    cout << "Value stored at ptr: " << *ptr << endl; // value is stored in heap
    cout << "Address of &ptr: " << &ptr << endl;     // it is stack memory address

    delete ptr; // clear heap memory
    ptr = 0;    // set pointer to nullptr
    cout << "Address ptr: " << ptr << endl;

    return 0;
}
