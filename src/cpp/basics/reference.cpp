#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int z = 2;
    int *ptr = &x;
    int &y = x; // reference to variable x
    // it is always a good idea to use `const int &y = x;` so that we cannot
    // modify y but still possible to change x

    cout << "x = " << x << endl;
    cout << "ptr = " << *ptr << endl;
    cout << "y = " << y << endl
         << endl;

    x = 20;
    cout << "x = " << x << endl;
    cout << "ptr = " << *ptr << endl;
    cout << "y = " << y << endl
         << endl;

    y = 50;
    cout << "x = " << x << endl;
    cout << "ptr = " << *ptr << endl;
    cout << "y = " << y << endl;
    return 0;
}
