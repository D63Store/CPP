#include <iostream> 
#include <string>

using namespace std;

int readNumber() {
	cout << "Введите число >>> ";

	int number;
	cin >> number;

	return number;
}


void writeAnswer(int number) {
	cout << to_string(number) << endl;
}
