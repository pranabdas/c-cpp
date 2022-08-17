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

    return (EXIT_SUCCESS);
}
