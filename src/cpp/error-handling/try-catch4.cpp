#include <iostream>
#include <cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

class min_age_error
{
public:
    min_age_error(int age)
    {
        if (age < 0)
        {
            message = "Error: age cannot be negative.";
        }
    }
    string message;
};

class max_age_error
{
public:
    max_age_error(int age, int MAX_AGE)
    {
        if (age > MAX_AGE)
        {
            message = "Error: age exceeded MAX_AGE.";
        }
    }
    string message;
};

class zero_age_error
{
public:
    zero_age_error() {}
};

void ask_age()
{
    int age;
    const int MAX_AGE = 150;

    cout << "How old are you? ";
    cin >> age;

    if (age < 0)
    {
        throw min_age_error(age);
    }
    else if (age > MAX_AGE)
    {
        throw max_age_error(age, MAX_AGE);
    }
    else if (age == 0)
    {
        throw zero_age_error();
    }

    cout << "Got it. You are " << age << " year(s) old.\n";
}

int main()
{
    try
    {
        ask_age();
    }
    catch (min_age_error err_min)
    {
        cout << err_min.message << endl;
        exit(EXIT_FAILURE); // exit(1);
    }
    catch (max_age_error err_max)
    {
        cout << err_max.message << endl;
        exit(EXIT_FAILURE); // exit(1);
    }
    // we can catch all errors (anything that is not caught in the preceding
    // catch blocks) following way, though no error specific value cannot be
    // passed.
    catch (...)
    {
        cout << "Error: something went wrong.\n";
        exit(EXIT_FAILURE);
    }

    return (EXIT_SUCCESS);
}
