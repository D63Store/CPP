#include <iostream>

int readNumber()
{
	std::cout << "Please enter a number:";
	int x{};
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The quotient is:" << x;
}

int main()
{
	int x{ };
	int y{ };
	x = readNumber();
	y = readNumber(); //fixed
	writeAnswer(x / y);

}
