#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    cout << setw(8) << "x"
        << setw(10) << "sin(x)" << endl;
    cout << string(20, '-') << endl;

    cout << fixed << setprecision(4);

    for (int i = 0; i <= 10; ++i)
    {
        double x = i * M_PI / 10;
        double y = sin(x);
        cout << setw(8) << x
            << setw(10) << y << endl;
    }
    return 0;

}