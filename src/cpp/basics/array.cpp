#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 8, 15};
    // arr[4] = {1, 2};
    // above assignment would set: arr[0] = 1, arr[1] = 2, arr[2] = 0, arr[3] = 0
    
    // multi-dimensional array: float arr2d[3][4];

    for (int i : arr)
    {
        cout << i << endl;
    }

    const int SIZE = 10; // `const` is necessary here
    double data[SIZE];

    cout << "Size of data = " << sizeof(data) << " bytes\n";
    // the above prints the size of the entire array

    return 0;
}
