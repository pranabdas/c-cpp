#include <iostream>
#include <iomanip> // setprecision
using namespace std;

int main()
{
    unsigned int u_num = 8;
    cout << "Unsigned integer: " << u_num << endl;

    int num = -9;
    cout << "Integer: " << num << endl;

    long int large_num = 3988764563425;
    cout << "Large integer: " << large_num << endl;

    float num_f = 3.14159;
    cout << "Float: " << num_f << endl;

    double num_d = 3.141592653589793;
    cout << "Double precision float: " << setprecision(16) << num_d << endl;

    char c = 'a';
    cout << "Char: " << c << endl;
    cout << "ASCII value of char: " << int(c) << endl;
    cout << "char corresponding to ascii value 98: " << char(98) << endl;

    char message[] = "Hello";
    cout << "String: " << message << endl;

    return 0;
}
