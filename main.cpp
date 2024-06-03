#include "io.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    writeAnswer(readNumber() + readNumber());
}
