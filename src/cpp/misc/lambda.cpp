// lambda expression or lambda function is a convenient way of defining an
// anonymous, small, and one-time use function to be used in the place right
// where it is required
// compile: g++ --std=c++2a filename.cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 4, 8, 12};

    // for_each: feature of C++20
    for_each(begin(v), end(v), [](int i)
             { cout << i << endl; });

    cout << endl;

    string prefix = "0";
    // variables can be captured by reference or by value:
    // [&var1, local_var=var2], and make them available inside lambda
    for_each(begin(v), end(v), [&prefix](int i)
    {
        if (i < 10)
            cout << prefix;
        
        cout << i << endl;
    });

    return 0;
}
