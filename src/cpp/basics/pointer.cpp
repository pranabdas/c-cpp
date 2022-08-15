#include <iostream>
using namespace std;

int main()
{
    int x = 10;   // declare and assign a integer variable
    int *ptr;     // declare an integer pointer
                  // pointers are variables that store address of our data
    ptr = &x;     // `&` operator returns the address of a variable
    int y = *ptr; // dereference the pointer variable to get its value

    // constant pointer: a non-constant pointer cannot point to constant var
    const int z = 100;
    const int *ptr_z;
    ptr_z = &z;

    // null pointer
    int *ptr_null = 0;
    cout << "NULL pointer: " << ptr_null << endl;

    // type void*
    // if we do not know the type of the pointer variable, we can declare
    // void *ptv;
    // address of any type can be stored in `ptv` above

    cout << "prt : " << ptr << endl;
    cout << "y : " << y << endl;

    x = 25;
    // *ptr = 25; // same result as above
    y = *ptr;
    // dereferencing operator `*` returns the value stored in the address
    cout << "y : " << y << endl;

    int arr[] = {10, 12, 15};
    int *ptr_arr = arr;
    // notice that we do not need `&` operator for the address of an array

    for (int i = 0; i < 3; i++)
    {
        cout << "arr[" << i << "] = " << *(ptr_arr + i) << endl;
    }

    return 0;
}
