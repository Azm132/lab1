#include <iostream>
#include <windows.h>
#include <iomanip>  // для setprecision

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    double weight, height;

    cout << "Введите вес (кг): ";
    cin >> weight;

    cout << "Введите рост (м): ";
    cin >> height;

    // Проверка корректности
    if (weight <= 0 || height <= 0) {
        cout << "Ошибка! Вес и рост должны быть положительными." << endl;
        return 1;
    }

    // Расчёт ИМТ
    double bmi = weight / (height * height);

    cout << fixed << setprecision(2);
    cout << "\nВаш ИМТ: " << bmi << endl;

    // Определение категории
    if (bmi < 18.5) {
        cout << "Категория: Недостаточный вес" << endl;
    }
    else if (bmi < 25.0) {
        cout << "Категория: Норма" << endl;
    }
    else if (bmi < 30.0) {
        cout << "Категория: Избыточный вес" << endl;
    }
    else {
        cout << "Категория: Ожирение" << endl;
    }

    return 0;
}