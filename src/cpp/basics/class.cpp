#include <iostream>
using namespace std;

class User
{
    string name;
    int age;

public:
    void set_name(string user_name) { name = user_name; }
    string get_name() { return name; }

    void set_age(int user_age) { age = user_age; }
    int get_age() { return age; }
};

int main()
{
    string name = "Pranab";
    int age = 35;
    User new_user;

    new_user.set_name(name);
    new_user.set_age(35);

    cout << "User name: " << new_user.get_name() << endl;
    // new_user.name is inaccessible as it is private
    cout << "User age: " << new_user.get_age() << endl;

    return 0;
}
