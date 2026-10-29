#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;

string convert(int number, int base) {
    if (number == 0) return "0";

    string result = "";
    string digits = "0123456789ABCDEF";

    while (number > 0) {
        result += digits[number % base];
        number /= base;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int number;

    cout << "Введите целое неотрицательное число: ";
    cin >> number;

    if (cin.fail() || number < 0) {
        cout << "Ошибка! Нужно целое неотрицательное число." << endl;
        return 1;
    }

    cout << "Двоичная:          " << convert(number, 2) << endl;
    cout << "Восьмеричная:      " << convert(number, 8) << endl;
    cout << "Шестнадцатеричная: " << convert(number, 16) << endl;

    return 0;
}