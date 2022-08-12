#include <iostream>
using namespace std;

int main()
{
    int x = 10;   // declare and assign a integer variable
    int *ptr;     // declare an integer pointer
    ptr = &x;     // assign the address of x to ptr
    int y = *ptr; // dereference the pointer variable to get its value

    cout << "prt : " << ptr << endl;
    cout << "y : " << y << endl;

    x = 25;
    y = *ptr;
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
