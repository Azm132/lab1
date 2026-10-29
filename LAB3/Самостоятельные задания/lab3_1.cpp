#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double weight, height;

    cout << "Введите вес (кг): ";
    cin >> weight;

    cout << "Введите рост (м, например 1.75): ";
    cin >> height;

    if (weight <= 0 || height <= 0) {
        cout << "Ошибка! Вес и рост должны быть положительными." << endl;
        return 1;
    }

    double bmi = weight / (height * height);

    cout << fixed << setprecision(1);
    cout << "Ваш ИМТ: " << bmi << endl;

    return 0;
}