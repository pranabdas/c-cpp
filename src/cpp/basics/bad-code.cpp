// g++ bad-code.cpp        // compiler does not show any warning
// g++ -Wall bad-code.cpp  // shows uninitialized warning
// cppcheck --enable=all bad-code.cpp

#include <iostream>
using namespace std;

int main()
{
    int i; // i is not initialized
    i = i + 1;

    cout << i << endl;
    return 0;
}
