#include <iostream>

long long swapValues(long long a, long long b, long long c, long long d)
{
    a = c;
    b = d;

    return (a, b);
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


    std::cout << "Numbers after swap: " << swapValues(value, value2, value2, value) << "\n";

    return 0;
}
