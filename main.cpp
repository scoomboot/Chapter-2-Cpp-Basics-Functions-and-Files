#include <iostream>

// 2.2 — Function return values (value-returning functions)

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

int main()
{
	int num{ getValueFromUser() };

	std::cout << num << "dounbled is: " << num * 2 << '\n';

	return 0;
}