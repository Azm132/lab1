#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    double a, b, c;
    double max1 = 0;        // Переменная для хранения максимального значения
    
    cout << "Введите первое число" << endl;
    cin >> a;

    cout << "Введите второе число" << endl;
    cin >> b;

    cout << "Введите третье число" << endl;
    cin >> c;

    if (a>b && a>c)     // Сравниваем числа с помощью логического И (&&)
    {
        max1 = a;
    }
    else if (b>c && b>a)
    {
        max1 = b;
    }
    else
    {
        max1 = c;
    }

    cout << "Максимальное число " << max1 << endl;

    return 0;
}