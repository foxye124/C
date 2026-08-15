#include <iostream>

int main()
{
	int number1;
	int number2;

	std::cout << "choose a number: ";
	std::cin >> number1;

	std::cout << "choose a second number: ";
	std::cin >> number2;

	int sum1 = number1 + number2;
	int sum2 = number1 - number2;
	int sum3 = number2 - number1;

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

// used long long insted int becouse of limit to calculate
// simle program to add up 2 numbers and say if they are even or not
