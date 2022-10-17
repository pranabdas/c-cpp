// reference operator `&` is same as the address of operator, they are not the
// same although related. References are alias for a target variable.
#include <iostream>
using namespace std;

int main()
{
    int target_var;
    int &ref_var = target_var; // reference declaration, they are initialized
                               // when created. they act as synonym/alias for
                               // the target variable. references cannot be
                               // reassigned

    target_var = 5;

    cout << "target : " << target_var << endl;
    cout << "ref: " << ref_var << endl;

    ref_var = 10;
    cout << "target : " << target_var << endl;
    cout << "ref: " << ref_var << endl;

    // using address of operator on reference and target
    // both prints the same: address of target variable, C++ gives no access to
    // actual reference address (unlike pointers)
    cout << "ref address   : " << &ref_var << endl;
    cout << "target address: " << &target_var << endl;

    return 0;
}
