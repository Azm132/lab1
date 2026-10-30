#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    double a, b;
    char c;     // Переменная для хранения операции

    cout << "Введите первое число" << endl;
    cin >> a;

    cout << "Введите второе число" << endl;
    cin >> b;

    cout << "Введите оператор (+, -, *, /)" << endl;
    cin >> c;

    cout << fixed << setprecision(2);

    switch (c)      // Выбор действия с помощью switch
    {
        case '+':
            cout << "Ответ: " << a+b << endl;
            break;
        case '-':
            cout << "Ответ: " << a-b << endl;
            break;
        case '*':
            cout << "Ответ: " << a*b << endl;
            break;
        case '/':
            if (b == 0)
            {
                cout << "Ошибка! Деление на ноль";
            }
            else
            {
                cout << "Ответ: " << a/b << endl;
            }
            break;
        default:
            cout << "Неккоректный операнд" << endl;
    }
    return 0;
}