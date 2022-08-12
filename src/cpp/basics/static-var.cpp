#include <iostream>
using namespace std;

void increment()
{
    static int count = 0;
    cout << count << endl;
    ++count;
}

int main()
{
    increment();
    increment();
    increment();

    return 0;
}
