#include <iostream>

using namespace std;

 template <typename AnyType>
 AnyType add(AnyType First, AnyType Second) {
	 return First + Second;
 }

int main()
{
	cout << add(2, 3) << '\n';
	cout << add(1.2, 3.4) << '\n';

}
