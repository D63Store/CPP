#include <iostream> 


int readNumber();
void writeAnswer(int x);



int main()
{
	setlocale(LC_ALL, "RU");

	writeAnswer(readNumber() + readNumber());
}
