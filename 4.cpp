#include <iostream>

long long swapValues(long long a, long long b)
{
    a = b;
    b = a;

    return (a);
    return (b);
}

int main()
{
    long long value;
    long long value2;
    std::cout << "Choose number: ";
    std::cin >> value;

    std::cout << "Choose a second number: ";
    std::cin >> value2;

    std::cout << "Number 1: " << value << "\n";
    std::cout << "Number 2: " << value2 << "\n";


    std::cout << "numbers after swap: " << swapValues(value, value2) << "\n";

    return 0;
}