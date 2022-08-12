#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    while (i <= 10)
    {
        cout << i << "\t" << i * i << endl;
        ++i;
    }
    cout << endl;

    i = 1;
    do
    {
        cout << i << "\t" << i * i * i << endl;
        ++i;
    } while (i <= 10);

    return 0;
}
