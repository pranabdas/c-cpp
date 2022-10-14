#include <iostream>
using namespace std;

int main()
{
    int a = 5; // 0b101
    int b, c;
    // bit shift operation only valid for integer
    b = a << 3; // same as a * 2^3 (0b101000)
    c = a >> 1; // 0b10, same as integer division by 2 (rounds toward negative
                // infinity, in contrast modulo division rounds towards 0)

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    // encode year, month, day in a single number
    unsigned int year, month, day, date;
    year = 1947;
    month = 8;
    day = 15;

    // use 5 bits for day, 4 bits for month
    date = (((year << 4) + month) << 5) + day;

    day = date % 32;
    month = (date >> 5) % 16;
    year = date >> 9;

    cout << day << "/" << month << "/" << year << endl;

    return 0;
}
