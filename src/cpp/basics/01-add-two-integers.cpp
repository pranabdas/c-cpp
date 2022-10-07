#include <iostream>
using namespace std;
// above declaration exposes all the methods described in the std namespace
// so that we can use cout instead of std::cout. Beware that in large
// applications there could be naming conflict among various imported headers.
// We can either use the convention std::cout or declare only the methods we
// need:
// using namespace std::cout;

int main()
{
    int input1, input2, sum;

    cout << "Enter input 1: ";
    cin >> input1;

    cout << "Enter input 2: ";
    cin >> input2;

    sum = input1 + input2;

    cout << input1 << " + " << input2 << " = " << sum << endl;

    return 0;
}
