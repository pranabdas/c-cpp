#include <iostream>
#include <tuple>
using namespace std;

tuple<int, int> find_biggest(int arr[], int size)
{
    int biggest = arr[0];
    int id = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > biggest)
        {
            biggest = arr[i];
            id = i;
        }
    }

    return make_tuple(biggest, id);
}

int main()
{
    int arr[] = {5, 8, 2, 3, 7, 4};
    const int SIZE = 6;

    for (int i = 1; i < SIZE; i++)
    {
        int biggest, id;
        tie(biggest, id) = find_biggest(arr, SIZE - i);

        if (biggest > arr[SIZE - i])
        {
            int tmp = arr[SIZE - i];
            arr[SIZE - i] = biggest;
            arr[id] = tmp;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
}
