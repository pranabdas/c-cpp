#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int sides = 6;

inline int roll_dice() { return (rand() % sides + 1); }
// inline does not cause function call, it will replace the codeblock inline
// wherever it is used. It should be used for small functions, where function
// call is more expensive than the actual computation

int main()
{
    const int n_dice = 2;
    int d1, d2;

    srand(clock()); // initialise random number with system time

    int n_trials;
    cout << "Enter number of trials: ";
    cin >> n_trials;

    for (int i = 0; i < n_trials; i++)
    {
        int result;
        result = roll_dice();
        cout << result << endl;
    }

    return 0;
}
