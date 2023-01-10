#include <iostream>
using namespace std;

void print_array(int arr[], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i];
        if (i < SIZE - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

void merge(int arr[], const int start, const int center, const int end)
{
    // temporary arrays
    auto *left_array = new int[center - start];
    auto *right_array = new int[end - center];

    // copy data to temp arrays
    for (auto i = 0; i < center - start; i++)
    {
        left_array[i] = arr[start + i];
    }

    for (auto i = 0; i < end - center; i++)
    {
        right_array[i] = arr[center + i];
    }

    // merge
    int i = 0;
    int j = 0;
    int left = start;
    while (left < end)
    {
        if ((j >= end - center) || ((i < center - start) && (left_array[i] < right_array[j])))
        {
            arr[left] = left_array[i];
            i++;
        }
        else
        {
            arr[left] = right_array[j];
            j++;
        }
        left++;
    }

    delete[] left_array;
    delete[] right_array;
}

void merge_sort(int arr[], int start, int end)
{
    if (end - start > 1)
    {
        auto center = (start + end + 1) / 2;
        merge_sort(arr, start, center);
        merge_sort(arr, center, end);
        merge(arr, start, center, end);
    }
}

int main()
{
    int arr[] = {5, 8, 2, 3, 7, 4};
    const int SIZE = 6;

    merge_sort(arr, 0, SIZE);
    print_array(arr, 6);

    return 0;
}
