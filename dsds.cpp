#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(65001);       
    SetConsoleOutputCP(65001);

    double a;
    double b;
    cout << "Введите первое число" << endl;
    cin >> a;
    cout << "Введите второе число" << endl;
    cin >> b;

    double S = a * b;
    double P = 2 * (a+b);
    
    cout << "Сторона А: " << a << endl;
    cout << "Сторона Б: " << b << endl;
    cout << "Периметр: " << P << endl;
    cout << "Площадь: " << S << endl;

    return 0;
}