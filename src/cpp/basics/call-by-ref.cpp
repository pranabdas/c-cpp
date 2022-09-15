// this program takes an integer input and prints number of digits in the given
// input and sum of the digits. For example, an input of 1235 would print 4 and
// 11. If we have to implement a function, we need to return two results. One of
// the ways we can achieve this by implementing a function with call by
// reference
#include <iostream>
using namespace std;

void analyze_digits(int, int &, int &);

int main()
{
    int num, num_digits, sum_digits;
    cout << "Enter integer input: ";
    cin >> num;

    analyze_digits(num, num_digits, sum_digits);

    cout << "Number of digits: " << num_digits << endl;
    cout << "Sum of digits: " << sum_digits << endl;

    return 0;
}

void analyze_digits(int num, int &num_digits, int &sum_digits)
{
    int digits = 0;
    int sum = 0;

    while (num > 0)
    {
        digits += 1;
        sum += num % 10;
        num = num / 10;
    }

    num_digits = digits;
    sum_digits = sum;
}
