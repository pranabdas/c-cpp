// features of c++17 used, compile with:
// g++ return-multiple-values.cpp -std=c++17
#include <iostream>
#include <tuple>
using namespace std;

tuple<int, int> sq_tuple(int a, int b)
{
    return make_tuple(a * a, b * b);
}

// using structured binding feature of c++17
tuple<int, int> sq_tuple_alt(int a, int b)
{
    return {a * a, b * b};
}

struct sq_type
{
    int res1;
    int res2;
};

sq_type sq_struct(int a, int b)
{
    return {a *a, b *b};
}

void sq_call_by_ref(int &a, int &b)
{
    a = a * a;
    b = b * b;
}

int main()
{
    int a = 2;
    int b = 5;
    int sq_a, sq_b;

    tie(sq_a, sq_b) = sq_tuple(a, b);
    cout << "tuple: " << sq_a << ", " << sq_b << endl;

    // only c++17 or above: g++ return-multiple-values.cpp -std=c++17
    auto [sq_alt_a, sq_alt_b] = sq_tuple_alt(a, b);
    cout << "structured binding: " << sq_alt_a << ", " << sq_alt_b << endl;

    auto ret_val = sq_struct(a, b);
    cout << "struct: " << ret_val.res1 << ", " << ret_val.res2 << endl;

    sq_a = a;
    sq_b = b;
    sq_call_by_ref(sq_a, sq_b);
    cout << "call by ref: " << sq_a << ", " << sq_b << endl;

    return 0;
}
