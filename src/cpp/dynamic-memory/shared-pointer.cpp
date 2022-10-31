#include <iostream>
#include <memory>
using std::cout;
using std::endl;
using std::make_shared;
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
    auto dev = make_shared<User>("Bill", 45);
    dev->welcome();
    cout << "...from main\n";
    {
        cout << "block scope starts here:\n";
        auto dev_copy = dev; // there can be only one
                             // pointer to the heap object
        dev_copy->welcome();
        cout << "...from block\n";
        cout << "block scope ends here. ";
    }

    cout << "main ends...\n";
    return 0;
} // delete is called automatically via destructor when all shared variables
  // goes out of scope
