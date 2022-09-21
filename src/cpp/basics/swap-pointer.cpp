// here we will pass pointer as function arguments
#include <iostream>
using namespace std;

void swap(int *ptx, int *pty)
{
    int temp = *ptx;
    *ptx = *pty;
    *pty = temp;
}

int main()
{
    int x = 4;
    int y = 9;

    swap(&x, &y);

    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
