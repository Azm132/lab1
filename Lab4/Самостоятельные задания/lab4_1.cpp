#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    srand(time(0));     // Инициализация генератора случайных чисел

    int secret = rand() % 100 + 1;      // Загадываем число от 1 до 100
    int guess;
    int attempts = 0;

    cout << "Я загадал число от 1 до 100. Попробуй угадать!" << endl;

    do {
        cout << "Твой вариант: ";
        cin >> guess;
        attempts++;

        if (guess > secret) {
            cout << "Меньше!" << endl;
        }
        else if (guess < secret) {
            cout << "Больше!" << endl;
        }
        else {
            cout << "Правильно! Ты угадал за " << attempts << " попыток." << endl;
        }
    } while (guess != secret);      // Цикл продолжается, пока число не угадано

    return 0;
}