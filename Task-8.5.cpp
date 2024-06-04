#include <iostream>

using namespace std;

template <typename AnyType>
AnyType add(AnyType First, AnyType Second) {
	return First + Second;
}


template <typename AnyType>
AnyType mult(AnyType First, int Second) {
	return First * Second;
}

template <typename AnyType, typename AnyType2>
AnyType sub(AnyType First, AnyType2 Second) {
	return First - Second;
}



int main()
{
	cout << add(2, 3) << '\n';
	cout << add(1.2, 3.4) << '\n';
	
	cout << mult(2, 3) << '\n';
	cout << mult(1.2, 3) << '\n';
	
	cout << sub(3, 2) << '\n';
	cout << sub(3.5, 2) << '\n';
	cout << sub(4, 1.5) << '\n';

}
