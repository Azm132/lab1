#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    double a, b, c, D, x1, x2;

    cout << "Введите первое число" << endl;
    cin >> a;

    cout << "Введите второе число" << endl;
    cin >> b;

    cout << "Введите третье число" << endl;
    cin >> c;

    if (a == 0)
    {
        cout << "Уравнение не квадратное" << endl;
    }
    else
    {
        D = b*b - 4*c*a;
        cout << fixed << setprecision(2);
    }

    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        cout << "Два корня x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (D == 0)
    {
        x1 = -b / (2*a);
        cout << "Один корень x1 = " << x1 << endl;
    }
    else
    {
        cout << "Нет корней" << endl;
    }
    return 0;
}