#include <iostream>
using namespace std;

int main()
{
    int age;
    const int MAX_AGE = 150;

    while (true)
    {
        cout << "How old are you? ";
        cin >> age;

        if (age < 0)
        {
            cout << "Age cannot be negative. Try again.\n";
        }
        else if (age > MAX_AGE)
        {
            cout << "Age exceeds MAX_AGE. Try again.\n";
        }
        else
        {
            break;
        }

        cin.clear();
        cin.ignore(1024, '\n');
    }

    cout << "Got it. You are " << age << " year(s) old.\n";
    return 0;
}
