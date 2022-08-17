#include <iostream>
#include <cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

class age_range_error
{
public:
    // empty object
    age_range_error(void) {}
};

void ask_age()
{
    int age;
    const int MAX_AGE = 150;

    cout << "How old are you? ";
    cin >> age;

    if (age < 0 || age > MAX_AGE)
    {
        throw age_range_error();
    }

    cout << "Got it. You are " << age << " year(s) old.\n";
}

int main()
{
    try
    {
        ask_age();
    }
    catch (age_range_error)
    {
        cout << "Age input is out of range! Exiting...\n";
        exit(EXIT_FAILURE); // exit(1);
    }

    return (EXIT_SUCCESS);
}
