#include <iostream>

int main()
{
	long long number1;
	long long number2;

	std::cout << "choose a number: ";
	std::cin >> number1;

	std::cout << "choose a second number: ";
	std::cin >> number2;

	long long sum1 = number1 + number2;
	long long sum2 = number1 - number2;
	long long sum3 = number2 - number1;

	std::cout << "you choose " << number1 << " and " << number2 << " it's sum is: " << sum1 << "\n";

	if (number1 > number2)
	{
		std::cout << "And your first chosen number is higher by. " << sum2 << "\n";
	}
	else if (number1 < number2)
	{
		std::cout << "And your second chosen number is higher by. " << sum3 << "\n";
	}
	else
	{
		std::cout << "And your number are same.";
	}
	return 0;
}
