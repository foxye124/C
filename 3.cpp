#include <iostream>

int bigger(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int number1;
    int number2;

    std::cout << "Choose a number: ";
    std::cin >> number1;
    std::cout << "Choose a second number: ";
    std::cin >> number2;
    if (number1 == number2)
    {
    std::cout << "Your numbers are same""\n";
    }
    else
    {
    std::cout << "Bigger number is " << bigger(number1, number2) << "\n";
    }
    return 0;
}
