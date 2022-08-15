#include <iostream>
using namespace std;

int main()
{
    char message[] = "Singapore is a city in a garden.";
    // how many characters are there in the above message?

    int count = 0;

    for (char c : message)
    {
        if (c == 0)
            break;

        ++count;
    }

    cout << "Number of characters = " << count << endl;

    // solution 2
    for (count = 0; message[count]; ++count)
        ; // example of null statement

    cout << "Solution 2 ans: " << count << endl;

    // solution 3
    count = 0;
    while (message[count])
    {
        ++count;
    }

    cout << "Solution 3 ans: " << count << endl;

    return 0;
}
