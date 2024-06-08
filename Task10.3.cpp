#include <iostream>

using namespace std;


void swapIntegers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    setlocale(LC_ALL, "RU");
    int x = 11;
    int y = 10;

    cout << "До обмена:" << endl;
    cout << "x = " << x << ", y = " << y << endl;


    swapIntegers(x, y);

    cout << "После обмена:" << endl;
    cout << "x = " << x << ", y = " << y << endl;


}
