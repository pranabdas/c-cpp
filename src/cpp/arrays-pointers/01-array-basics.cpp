#include <iostream>
using namespace std;

void print_2d_array(float *, int, int);

int main()
{
    int arr[] = {2, 4, 8, 15};
    // arr[4] = {1, 2};
    // above assignment sets: arr[0] = 1, arr[1] = 2, arr[2] = 0, arr[3] = 0
    // aggregation initialization:
    // note that if we do not provide any value via curly braces, the array
    // remains uninitialized. To make sure array is initialized to zeros:
    // arr[4] = {}

    for (int i : arr)
    {
        cout << i << endl;
    }

    const int SIZE = 10; // `const` is necessary here
    double data[SIZE];
    // if the size of array is not known compile time, use heap dynamic array

    cout << "Size of data = " << sizeof(data) << " bytes\n";
    cout << "Length of data array: " << sizeof(data) / sizeof(data[0]) << endl;
    // the above prints the size of the entire array

    // multi-dimensional array:
    float arr2d[3][4] = {0.0}; // this initializes all elements to with 0.0
    cout << "\narr2d:\n";
    print_2d_array(&arr2d[0][0], 3, 4);

    float arr2d2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout << "\narr2d2:\n";
    print_2d_array(&arr2d2[0][0], 3, 4);

    float arr2d3[3][4] = {{1.1, 2.2, 3.3, 4.4},
                          {5.5, 6.6, 7.7, 8.8},
                          {9.9, 10., 11., 12.}};
    cout << "\narr2d3:\n";
    print_2d_array(&arr2d3[0][0], 3, 4);

    float arr2d4[][4] = {{1.1, 2.2, 3.3, 4.4},
                          {5.5, 6.6, 7.7, 8.8},
                          {9.9, 10., 11., 12.}};
    cout << "\narr2d4:\n";
    print_2d_array(&arr2d4[0][0], 3, 4);

    float arr2d5[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout << "\narr2d5:\n";
    print_2d_array(&arr2d5[0][0], 3, 4);

    float arr2d6[3][4] = {0.3}; // sets first element to 0.3, rest to 0.0
    cout << "\narr2d6:\n";
    print_2d_array(&arr2d6[0][0], 3, 4);

    return 0;
}

void print_2d_array(float *arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // array elements are continuously stored row by row in C++
            cout << *(arr + (n * i) + j) << "\t";
            //      |   --- pointer to the first element, do the pointer
            //      |       arithmetic to get the next elements
            //      dereference the value
        }
        cout << endl;
    }
}
