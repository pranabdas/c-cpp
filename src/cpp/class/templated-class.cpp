#include <iostream>
using namespace std;

template <class T>
class SomeVal
{
    T data;

public:
    T get_val() const
    {
        return data;
    }

    void set_val(T new_data);
};

template <class T>
void SomeVal<T>::set_val(T new_data)
{
    data = new_data;
}

int main()
{
    SomeVal<int> my_data;
    my_data.set_val(30);

    cout << my_data.get_val() << endl;

    return 0;
}
