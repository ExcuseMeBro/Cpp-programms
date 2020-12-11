#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, k, p = 1, m = 0, t = 0, l = 0;
    cout << "Введите число N этажей: ";
    cin >> N;
    cout << "Введите номер этажа, накотором шары разбиваются: ";
    cin >> k;
    cout << endl;

    for (int i = 1; i < 100000; i = i * 2)
    {
        if (N > i && N <= i * 2)
        {
            l = i * 2;
            i = 100000;
        }
    }
    if (k > N)
        cout << "Шары не разбиваются!";
    if (k == N)
    {
        cout << "1 шаг шар №1 этаж №" << N << "   разбился" << endl;
        cout << "Всего шагов: 1" << endl << "Шары разбиваются на" << N << " этажe";
    }
    if (k < N)
    {
        for (int i = 2; i <= l; i = i * 2)
        {
            if (i >= N)
            {
                cout << p;
                cout << " шаг   ";
                cout.width(2);
                cout << "шар №1";
                cout << "   этаж №";
                cout.width(2);
                cout << N - 1;
            }
            else
            {
                cout << p;
                cout << " шаг   ";
                cout.width(2);
                cout << "шар №1";
                cout << "   этаж №";
                cout.width(2);
                cout << i;
            }
            if (i >= k)
            {
                if (i >= N)
                {
                    cout << "   разбился" << endl;
                    m = l;
                    i = l;
                }
                else
                {
                    cout << "   разбился" << endl;
                    m = i;
                    i = l;
                }
            }
            else
            {
                cout << "    не разбился" << endl;
            }
            p++;
        }
        l = m / 2 + 1;
        if (l > 2)
        {
            for (int j = l; j <= m; j++)
            {
                cout << p;
                cout << " шаг   ";
                cout << "шар №2";
                cout << "   этаж №";
                cout.width(2);
                cout << j;
                if (j == k)
                {
                    cout << "   разбился" << endl
                         << endl;
                    t = j;
                    j = m;
                    cout << "Всего шагов: " << p << endl
                         << endl;
                    cout << "Шары разбиваются на " << t << " этаже" << endl
                         << endl;
                }
                else
                {
                    cout << "   не разбился" << endl;
                }
                p++;
            }
        }
        else
        {
            cout << "Всего шагов: 1" << endl;
            cout << "Шары разбиваются на 2 этаже" << endl;
        }
    }

    return 0;
}
