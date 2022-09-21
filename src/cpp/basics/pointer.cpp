// pointers are variables for storing memory addresses
// type of pointer is tied to the type of variable address it stores
#include <iostream>
using namespace std;

int main()
{
    int x = 10;   // declare and assign a integer variable
    int *ptr;     // declare an integer pointer
                  // Note that pointers do not declare memory
    ptr = &x;     // `&` operator returns the address of a variable
    int y = *ptr; // dereference the pointer variable to get its value

    // the dereference operator * can appear on the left side of an assignment
    // we can assign a new value ot x by:
    // *ptr = 20;

    // pointer to const: a non-constant pointer cannot point to constant var
    const int z = 100;
    const int *ptr_z;
    ptr_z = &z;
    // ++ptr_z; // OK

    // there can also be constant pointer
    int cx = 20;
    int *const pt_cx = &cx; // const pointer can only be initialized
                            // it cannot be assigned later
    // ++*pt_cx; // OK: cx is not constant
    // ++pt_cx;  // Not allowed: pt_cx is constant

    // null pointer
    int *ptr_null = 0;
    // alternatively
    // ptr_null = NULL;
    // ptr_null = nullptr;
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

    // pointer to a pointer
    // pointer is simply a variable that stores the address of a variable
    // it is possible also to store the address of a pointer
    // In numerical applications, pointer to pointers often used when we have
    // multidimensional arrays (the chain of pointers i.e., pointer to pointer
    // to pointer ... can go up to the dimension of arrays)
    int xx;
    int *pt_xx;
    int **pt_pt_xx;

    pt_xx = &xx;
    pt_pt_xx = &pt_xx;

    xx = 12;
    cout << "Pointer to a pointer: xx = " << **pt_pt_xx << endl;

    int arr[] = {10, 12, 15};
    int *ptr_arr = arr;
    // notice that we do not need `&` operator for the address of an array
    // the above assignment is same as:
    // int *ptr_arr &arr[0];

    for (int i = 0; i < 3; i++)
    {
        cout << "arr[" << i << "] = " << *(ptr_arr + i) << endl;
    }

    // we can refer to the address of pointer as well
    cout << "Address of ptr: " << &ptr << endl;

    return 0;
}
