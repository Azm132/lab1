#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    double a, b;

    cout << "Введите длину первой стороны: ";
    cin >> a;
    cout << "Введите длину второй стороны: ";
    cin >> b;

    double area = a * b;
    double perimeter = 2 * (a + b);
    //dsdsdddsdsd
    cout << fixed << setprecision(2);
    cout << "Площадь: " << area << "\n";
    cout << "Периметр: " << perimeter << "\n";

    return 0;
}