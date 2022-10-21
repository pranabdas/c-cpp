#include <iostream>
using namespace std;

int total(int[], int); // same as: int total(int *, int);
                       // int[] expects an integer pointer

int main()
{
    const int SIZE = 5;
    int expenses[SIZE] = {10, 12, 21, 25, 36};
    int sum;

    // size = sizeof(expenses) / sizeof(expenses[0]);
    sum = total(expenses, SIZE); // same as: sum = total(&expenses[0], SIZE);
                                 // array name actually passes the pointer of
                                 // first element
    cout << "total = " << sum << endl;

    return 0;
}

int total(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size;)
    {
        sum += arr[i++]; // use arr[i], then increase i
    }

    return sum;
}
