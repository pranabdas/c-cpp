#include <iostream>

int main()
{
    int input_1, input_2;
    float result;

    // Asking input from the user
    std::cout << "Enter first input\t";
    std::cin >> input_1;
    std::cout << "Enter second input\t";
    std::cin >> input_2;

    result = (float)input_1 / input_2;
    /* We need to cast at least one one integer as float otherwise the
    result behaves like integer. */

    std::cout << input_1 << "/" << input_2 << " = " << result << "\n";

    return 0;
}
