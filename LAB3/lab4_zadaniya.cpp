//Задание 2

// #include <iostream>
// #include <windows.h>
// using namespace std;

// int main()
// {
//     SetConsoleCP(65001);
//     SetConsoleOutputCP(65001);
//     double a, b, c;
//     double max1 = 0;
    
//     cout << "Введите первое число" << endl;
//     cin >> a;

//     cout << "Введите второе число" << endl;
//     cin >> b;

//     cout << "Введите третье число" << endl;
//     cin >> c;

//     if (a>b && a>c)
//     {
//         max1 = a;
//     }
//     else if (b>c && b>a)
//     {
//         max1 = b;
//     }
//     else
//     {
//         max1 = c;
//     }

//     cout << "Максимальное число " << max1 << endl;

//     return 0;
// }

//Задание 3

// #include <iostream>
// #include <windows.h>
// using namespace std;

// int main()
// {
//     SetConsoleCP(65001);
//     SetConsoleOutputCP(65001);
//     int a;
//     cout << "Введите возраст" << endl;
//     cin >> a;

//     if (a < 0)
//     {
//         cout << "Неккоректный возраст";
//     }
//     else if (a <= 12)
//     {
//         cout << "Ребенок";
//     }
//     else if (a <= 17)
//     {
//         cout << "Подросток";
//     }
//     else if (a <= 64)
//     {
//         cout << "Взрослый";
//     }
//     else
//     {
//         cout << "Пожилой";
//     }

//     return 0;
// }

//Задание 4

// #include <iostream>
// #include <windows.h>
// #include <iomanip>
// #include <cmath>
// using namespace std;

// int main()
// {
//     SetConsoleCP(65001);
//     SetConsoleOutputCP(65001);
//     double a, b, c, D, x1, x2;

//     cout << "Введите первое число" << endl;
//     cin >> a;

//     cout << "Введите второе число" << endl;
//     cin >> b;

//     cout << "Введите третье число" << endl;
//     cin >> c;

//     if (a == 0)
//     {
//         cout << "Уравнение не квадратное" << endl;
//     }
//     else
//     {
//         D = b*b - 4*c*a;
//         cout << fixed << setprecision(2);
//     }

//     if (D > 0)
//     {
//         x1 = (-b + sqrt(D)) / (2*a);
//         x2 = (-b - sqrt(D)) / (2*a);
//         cout << "Два корня x1 = " << x1 << ", x2 = " << x2 << endl;
//     }
//     else if (D == 0)
//     {
//         x1 = -b / (2*a);
//         cout << "Один корень x1 = " << x1 << endl;
//     }
//     else
//     {
//         cout << "Нет корней" << endl;
//     }
//     return 0;
// }

//Задание 5

// #include <iostream>
// #include <windows.h>
// #include <iomanip>
// #include <cmath>
// using namespace std;

// int main()
// {
//     SetConsoleCP(65001);
//     SetConsoleOutputCP(65001);
//     double a, b;
//     char c;

//     cout << "Введите первое число" << endl;
//     cin >> a;

//     cout << "Введите второе число" << endl;
//     cin >> b;

//     cout << "Введите оператор (+, -, *, /)" << endl;
//     cin >> c;

//     cout << fixed << setprecision(2);

//     switch (c)
//     {
//         case '+':
//             cout << "Ответ: " << a+b << endl;
//             break;
//         case '-':
//             cout << "Ответ: " << a-b << endl;
//             break;
//         case '*':
//             cout << "Ответ: " << a*b << endl;
//             break;
//         case '/':
//             if (b == 0)
//             {
//                 cout << "Ошибка! Деление на ноль";
//             }
//             else
//             {
//                 cout << "Ответ: " << a/b << endl;
//             }
//             break;
//         default:
//             cout << "Неккоректный операнд" << endl;
//     }
//     return 0;
// }

//Задание 1

// #include <iostram>
// #include <windows.h>
// using namespace std;

// int main()
// {
//     SetConsoleCP(65001);
//     SetConsoleOutputCP(65001);

//     double a;
//     cout << "Введите число" << endl;
// }