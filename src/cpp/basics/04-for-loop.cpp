#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "For loop variant 1:\n";
    for (i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    int j = 0;
    cout << "\nFor loop variant 2:\n";
    for (; j < 5; j++) // since j is already initialized, loop condition can
                       // start with null statement
    {
        cout << j << endl;
    }

    cout << "\nFor loop variant 3:\n";
    for (int k = 0; k < 5; k++) // loop variable can be locally declared
    {
        cout << k << endl;
    }

    int size = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < size;)
    {
        sum += arr[i++]; // post increment i after accessing array element
    }

    cout << "sum = " << sum << endl;

    return 0;
}
