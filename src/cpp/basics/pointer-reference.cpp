#include <iostream>
using namespace std;

void delete_ptr(int *&ptr)
// in order to delete and modify pointer in the calling environment, we need
// pass by reference
{
    delete ptr;
    ptr = nullptr;
}

int main()
{
    int *ptr;
    ptr = new int;
    *ptr = 8;

    cout << "ptr add: " << ptr << ", ptr value: " << *ptr << endl;

    delete_ptr(ptr);
    cout << "ptr add: " << ptr << endl;

    return 0;
}
