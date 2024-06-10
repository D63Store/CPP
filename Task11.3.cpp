#include <iostream>
#include <vector>
using namespace std;



// Итеративная версия функции binarySearch
int binarySearchIterative(const vector<int>& arr, int target) {
    int min = 0;
    int max = arr.size() - 1;

    while (min <= max) {
        int mid = min + (max - min) / 2; // Избегаем переполнения
        if (arr[mid] == target) {
            return mid; // Нашли целевой элемент
        }
        else if (arr[mid] < target) {
            min = mid + 1; // Ищем в правой половине
        }
        else {
            max = mid - 1; // Ищем в левой половине
        }
    }

    return -1; // Целевой элемент не найден
}

// Рекурсивная версия функции binarySearch
int binarySearchRecursiveHelper(const vector<int>& arr, int target, int min, int max) {
    if (min > max) {
        return -1; // Целевой элемент не найден
    }

    int mid = min + (max - min) / 2; // Избегаем переполнения

    if (arr[mid] == target) {
        return mid; // Нашли целевой элемент
    }
    else if (arr[mid] < target) {
        return binarySearchRecursiveHelper(arr, target, mid + 1, max); // Рекурсивный вызов для правой половины
    }
    else {
        return binarySearchRecursiveHelper(arr, target, min, mid - 1); // Рекурсивный вызов для левой половины
    }
}

// Обертка для рекурсивной версии, чтобы интерфейс был одинаковым
int binarySearchRecursive(const vector<int>& arr, int target) {
    return binarySearchRecursiveHelper(arr, target, 0, arr.size() - 1);
}

int main() {
    setlocale(LC_ALL, "RU");
    vector<int> arr = { 3, 6, 7, 9, 12, 15, 18, 21, 24 };
    int target = 7;

    // Запуск итеративной версии
    int resultIterative = binarySearchIterative(arr, target);
    if (resultIterative != -1) {
        cout << "Итеративная версия: Элемент найден на индексе: " << resultIterative << endl;
    }
    else {
        cout << "Итеративная версия: Элемент не найден в массиве." << endl;
    }

    // Запуск рекурсивной версии
    int resultRecursive = binarySearchRecursive(arr, target);
    if (resultRecursive != -1) {
        cout << "Рекурсивная версия: Элемент найден на индексе: " << resultRecursive << endl;
    }
    else {
        cout << "Рекурсивная версия: Элемент не найден в массиве." << endl;
    }

}
