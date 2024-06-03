#include <iostream> 
#include <string>

using namespace std;


int main()
{
	setlocale(LC_ALL, "RU");
	int first_num{ 0 };
	int second_num{ 0 };

	cout << "Введи первое число: ";
	cin >> first_num;
	cout << "Введи второе число: ";
	cin >> second_num;

	cout << first_num << " + " << second_num << " = " << first_num + second_num << endl;
	cout << first_num << " - " << second_num << " = " << first_num - second_num << endl;


}
