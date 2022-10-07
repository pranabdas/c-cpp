#include <iostream>
using namespace std;

int main()
{
    int age = 0, category;

    cout << "Please enter your age in years: ";
    cin >> age;

    if (age < 0)
        category = 0;
    else if (age <= 18)
        category = 1;
    else if (age < 65)
        category = 2;
    else
        category = 3;

    switch (category)
    {
    case 0:
        cout << "Invalid age." << endl;
        break;
    case 1:
        cout << "You are not an adult." << endl;
        break;
    case 2:
        cout << "You are an adult." << endl;
        break;
    case 3:
        cout << "You are a senior citizen." << endl;
        break;

    default:
        cout << "Should not be necessary here." << endl;
        break;
    }

    return 0;
}
