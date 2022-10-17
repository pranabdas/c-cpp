#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    for (;;) // forever for loop
    {
        i++;

        if (i > 10)
            break;

        if ((i % 2) == 0)
        {
            continue; // jumps to the loop beginning
        }
        else
        {
            cout << i << endl; // print odd numbers
        }
    }

    return 0;
}
