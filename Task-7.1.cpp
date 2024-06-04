#include <iostream>
#include <string>
#include "constants.h"

using namespace std;

//constants.h start:
#ifndef CONSTANTS_H
#define CONSTANTS_H

const double SpeedFall{ 9.8 }; 

#endif
//constants.h end

void Process(double Height) {
    double HeightNow;
    int t = 0;

    while (true) {
        HeightNow = Height - (SpeedFall * (t * t)) / 2;
        if (HeightNow > 0.0) {
            cout << "Высота пададения за " << t << " секунд составила " << HeightNow << " Метров" << endl;
        }
        else {
            cout << "Мяч оказался на земле за " << t << " секунд!";
            break;
        }
        ++t;
    }

}





int main() {
    setlocale(LC_ALL, "RU");



    double Height{};

    cout << "Введите высоту башни: ";
    cin >> Height;

    Process(Height);

}
