#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    double x, y;

    cout << "Введите координату X: ";
    cin >> x;

    cout << "Введите координату Y: ";
    cin >> y;

    if (x == 0 && y == 0) {
        cout << "Точка находится в начале координат" << endl;
    }
    else if (x == 0) {
        cout << "Точка лежит на оси Y" << endl;
    }
    else if (y == 0) {
        cout << "Точка лежит на оси X" << endl;
    }
    else if (x > 0 && y > 0) {
        cout << "Точка находится в I четверти" << endl;
    }
    else if (x < 0 && y > 0) {
        cout << "Точка находится во II четверти" << endl;
    }
    else if (x < 0 && y < 0) {
        cout << "Точка находится в III четверти" << endl;
    }
    else {
        cout << "Точка находится в IV четверти" << endl;
    }

    return 0;
}