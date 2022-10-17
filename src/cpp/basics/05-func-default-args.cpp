#include <iostream>
using namespace std;

// int vol(int, int width=1, int height=1);
int vol(int, int = 1, int = 1);

int main()
{
    cout << vol(1) << endl;
    cout << vol(3, 2, 2) << endl;
    return 0;
}

int vol(int length, int width, int height)
{
    return (length * width * height);
}
