#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 8, 15};
    // arr[4] = {1, 2};
    // above assignment sets: arr[0] = 1, arr[1] = 2, arr[2] = 0, arr[3] = 0
    // aggregation initialization:
    // note that if we do not provide any value via curly braces, the array
    // remains uninitialized. To make sure array is initialized to zeros:
    // arr[4] = {}

    // multi-dimensional array: float arr2d[3][4];

    for (int i : arr)
    {
        cout << i << endl;
    }

    const int SIZE = 10; // `const` is necessary here
    double data[SIZE];
    // if the size of array is not known compile time, use heap dynamic array

    cout << "Size of data = " << sizeof(data) << " bytes\n";
    // the above prints the size of the entire array

    return 0;
}
