#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 9;

    const char *s = x > y ? "Yes" : "No";

    cout << s << endl;
    return 0;
}
