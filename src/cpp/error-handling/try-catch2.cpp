#include <iostream>
#include <cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

class age_range_error
{
public:
    age_range_error(int age, int MAX_AGE)
    {
        if (age < 0)
        {
            message = "Error: age cannot be negative.";
        }
        else if (age > MAX_AGE)
        {
            message = "Error: age exceeded MAX_AGE.";
        }
    }
    string message;
};

void ask_age()
{
    int age;
    const int MAX_AGE = 150;

    cout << "How old are you? ";
    cin >> age;

    if (age < 0 || age > MAX_AGE)
    {
        throw age_range_error(age, MAX_AGE);
    }

    cout << "Got it. You are " << age << " year(s) old.\n";
}

int main()
{
    try
    {
        ask_age();
    }
    catch (age_range_error err)
    {
        cout << err.message << endl;
        exit(EXIT_FAILURE); // exit(1);
    }

    return (EXIT_SUCCESS);
}
