#include <iostream>

void swapValues(int& a, int& b)
{
   int hold;
   hold = a;
   a = b;
   b = hold;
}

int main()
{
    int value;
    int value2;
    std::cout << "Choose number: ";
    std::cin >> value;

    std::cout << "Choose a second number: ";
    std::cin >> value2;

    std::cout << "Number 1: " << value << "\n";
    std::cout << "Number 2: " << value2 << "\n";

    swapValues(value, value2);

    std::cout << "Numbers after swap: " << value << " " << value2 << "\n";

    return 0;
}
//program to swap values
