#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userName;
    cout << "What is your name?" << '\n';
    getline(cin, userName);
    cout << "Hi " << userName << '\n';
}
