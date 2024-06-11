#include <iostream>

// 2.4 — Introduction to function parameters and arguments

/* 
Write a complete program that reads an integer from the user,
doubles it using the doubleNumber() function you wrote in the previous quiz question,
and then prints the doubled value out to the console. 
*/


double getValue()
{
	std::cout << "Enter a number: ";
	double num{};
	std::cin >> num;

	return num;
}

void doubleNumber(double num)
{
	std::cout << num * 2 << '\n';
}

int main()
{

	doubleNumber(getValue());

	return 0;
}