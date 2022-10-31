#include <iostream>
#include <memory>
using std::cout;
using std::endl;
using std::make_unique;
using std::string;

class User
{
public:
    // constructor
    User(string user_name = "", int user_age = 18)
    {
        name = user_name;
        age = user_age;
        cout << "Default constructor called\n";
    };
    // destructor
    ~User()
    {
        cout << "Default destructor called\n";
    };

    string name;
    int age;

    void welcome()
    {
        cout << "Welcome " << name << endl;
    }
};

int main()
{
    cout << "main starts...\n";
    {
        cout << "block scope starts here:\n";
        auto dev = make_unique<User>("Bill", 45); // there can be only one
                                                  // pointer to the heap object
        dev->welcome();
        cout << "block scope ends here. ";
    } // delete dev is automatically called via default destructor

    cout << "main ends...\n";
    return 0;
}
