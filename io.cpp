#include "io.h"
#include <iostream>

using namespace std;

int readNumber() {
    cout << "Введите число >>> ";
    int number;
    cin >> number;
    return number;
}

void writeAnswer(int number) {
    cout << "Результат: " << number << endl;
}
