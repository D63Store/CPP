#include <iostream>
#include <string>
#include "constants.h"

using namespace std;



void Process(double Height, int Time) {
    double HeightNow;

    for (int t = 0; t <= Time; t++) {
        HeightNow = Height - (SpeedFall * (t * t)) / 2;
        if (HeightNow > 0.0) {
            cout << "Высота пададения за " << t << " секунд составила " << HeightNow << " Метров" << endl;
        }
        else {
            cout << "Мяч оказался на земле за " << t << " секунд!";
            break;
        }
    }

}





int main() {
    setlocale(LC_ALL, "RU");



    double Height{};
        
    cout << "Введите высоту башни: ";
    cin >> Height;

    Process(Height, 5);

}
