#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 54;

    cout << "Address ptr: " << ptr << endl;          // it is a heap memory address
    cout << "Value stored at ptr: " << *ptr << endl; // value is stored in heap
    cout << "Address of &ptr: " << &ptr << endl;     // it is stack memory address

    delete ptr; // clear heap memory
    ptr = 0;    // set pointer to nullptr
    cout << "Address ptr: " << ptr << endl;

    return 0;
}
