#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userName;
    cout << "What is your name?" << '\n';
    getline(cin, userName);
    cout << "Hi " << userName << '\n';

    char str[] = "Happy learning!";
    cout << str << endl;

    // using pointer reference
    const char *str_ptr = "How are you doing?";
    cout << str_ptr << endl;

    // string concatenation
    const char *message = "Today is Friday. "
                          "Have a great weekend.";
    cout << message << endl;

    return 0;
}
