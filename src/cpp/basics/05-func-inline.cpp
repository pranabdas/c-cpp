// inline functions are just copied to the where they are called
// useful for small functions, function calls have some overhead due to stack
// calls
#include <iostream>
using namespace std;

inline int make_double(int);

int main()
{
    int size = 3;
    cout << make_double(size) << endl;

    return 0;
}

int make_double(int size)
{
    return (2 * size);
}
