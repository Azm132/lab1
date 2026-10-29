#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int day, month, year;

    cout << "Введите день рождения: ";
    cin >> day;
    cout << "Введите месяц рождения: ";
    cin >> month;
    cout << "Введите год рождения: ";
    cin >> year;

    time_t now = time(0);
    tm *ltm = localtime(&now);

    int current_day = ltm->tm_mday;
    int current_month = ltm->tm_mon + 1;
    int current_year = ltm->tm_year + 1900;

    int age = current_year - year;

    if (month > current_month || (month == current_month && day > current_day)) {
        age--;
    }

    cout << "Ваш возраст: " << age << " лет" << endl;

    return 0;
}