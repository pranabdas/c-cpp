#include <iostream>
using namespace std;

template <class T>

T sum(T data[], int size = 5) // T is the generic type 
// notice also the default parameter size
{
    T sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += data[i];
    }

    return sum;
}

int main()
{
    int data_int[] = {1, 2, 4, 8, 16};
    cout << "Sum of integer array = " << sum(data_int) << endl;

    float data_float[] = {1.4, 22.3, 4.3, 8, 16.7};
    cout << "Sum of float array = " << sum(data_float) << endl;
}
