#include "constants.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "How many students are in your class? ";
	int students{};
	cin >> students;


	if (students > constants::max_class_size)
		cout << "There are too many students in this class";
	else
		cout << "This class isn't too large";

}
