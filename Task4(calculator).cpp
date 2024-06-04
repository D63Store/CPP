#include <iostream>
#include <string>

using namespace std;

template <typename T>
void view(const T& text, bool new_line = false) {
    if (new_line) {
        cout << text << endl;
    }else {
        cout << text;
    }
    
}

void GetUserNumbers(double& FirstNumber, double& SecondNumber) {
    view("Введи первое число: ");
    cin >> FirstNumber;
    view("Введи второе число: ");
    cin >> SecondNumber;
}

void ProcessNumber(char Method, double FirstNumber, double SecondNumber) {
    switch (Method) {

    case '+':
        view("Ответ: " + to_string(FirstNumber + SecondNumber),true);
        break;
    case '-':
        view("Ответ: " + to_string(FirstNumber - SecondNumber), true);
        break;
    case '*':
        view("Ответ: " + to_string(FirstNumber * SecondNumber),true);
        break;
    case '/':
        if (SecondNumber != 0) {
            view("Ответ: " + to_string(FirstNumber / SecondNumber),true);
        }
        else {
            view("ERR: Деление на ноль!", true);
        }
        break;
    default:
        view("ERR: Неизвестная операция", true);
        break;
    }

}

void ProcessMethod(char& Method) {
    
    view("Введите метод из представленных (+, -, *, /) >>> ");
    cin >> Method;
}




int main() {
    setlocale(LC_ALL, "RU");
    double FirstNumber{};
    double SecondNumber{};
    char Method{};
    char waiter;

    while (true) {
        GetUserNumbers(FirstNumber, SecondNumber);
        ProcessMethod(Method);
        ProcessNumber(Method, FirstNumber, SecondNumber);
        system("pause");

        system("cls");



    }
}
