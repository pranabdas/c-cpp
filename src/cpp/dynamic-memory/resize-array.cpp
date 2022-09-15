#include <iostream>
using namespace std;

void resize_array(int *&arr, int current_size, int new_size)
{
    if (current_size == new_size)
    {
        return;
    }

    int *tmp = new int[new_size];
    // copy elements to new array
    if (new_size > current_size)
    {
        for (int i = 0; i < current_size; i++)
        {
            tmp[i] = arr[i];
        }

        for (int i = current_size; i < new_size; i++)
        {
            tmp[i] = 0;
        }
    }
    else if (new_size < current_size)
    {
        for (int i = 0; i < new_size; i++)
        {
            tmp[i] = arr[i];
        }
    }

    delete[] arr;
    arr = tmp;
}

int main()
{
    int size = 5;
    int *arr = new int[5];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }

    int new_size = 6;
    resize_array(arr, size, new_size);

    for (int i = 0; i < new_size; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
