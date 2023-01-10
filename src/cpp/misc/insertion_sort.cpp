#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 8, 2, 3, 7, 4};
    const int SIZE = 6;

    for (int i = 1; i < SIZE; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            int tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i];

        if (i != SIZE - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
