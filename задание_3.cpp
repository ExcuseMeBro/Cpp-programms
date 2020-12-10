#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    string name;
    double x1, x2, a, d, y;
    int n, z;
    ofstream fout;
    n = 0;
    z = 1;
    d = 0;
    cout << "Введите имя файла сохранения:";
    getline(cin, name);
    fout.open(name);
    if (!fout.is_open())
    {
        n = 1;
        cout << "Ошибка ввода!" << endl;
    }
    if (n == 0)
    {
        cout << "Введите a:";
        cin >> a;
        if (std::cin.fail())
        {
            n = 1;
            cout << "Ошибка ввода!" << endl;
        }
    }
    if (n == 0)
    {
        cout << "Введите x1:";
        cin >> x1;
        if (std::cin.fail())
        {
            n = 1;
            cout << "Ошибка ввода!" << endl;
        }
    }
    if (n == 0)
    {
        cout << "Введите x2:";
        cin >> x2;
        if (std::cin.fail())
        {
            n = 1;
            cout << "Ошибка ввода!" << endl;
        }
    }
    if (n == 0)
    {
        cout << "Введите d:";
        cin >> d;
        if (std::cin.fail())
        {
            n = 1;
            cout << "Ошибка ввода!" << endl;
        }
    }
    if (n == 0)
    {
        if (d < 0 || x1 > x2 || d == 0)
        {
            n = 1;
            cout << "Ошибка ввода!" << endl;
        }
        if (n == 0)
        {
            fout << "Полученные результаты:" << endl;
            for (; x1 <= x2; x1 += d)
            {
                y = a * sin(1. / x1);
                fout << "y" << z << " = " << y << endl;
                z++;
            }
        }
    }
    cout << "Откройте файл " << name << ", чтобы увидеть результаты!\n";
    fout.close();
}
