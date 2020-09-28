//25.Ro’yhatda transpozitsiya usuli yordamida toq elementlarni topish dasturini tuzing.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, x, p, h = 0;
    cout << "n (n>2):";
    cin >> n;
    int a[n];
    cout << n << " ta son element:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Kiritilgan elementlar:\n";
    for (i = 0; i < n; i++)
        cout << a[i] << "  ";
    cout << endl;
    p = n;
    bool f = true;
    while (f)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                p = i;
                if (p == 0)
                {
                    if (i == 0)
                        h += 1;
                    f = false;
                }
                else
                {
                    h += 1;
                    swap(a[i], a[i - 1]);
                }
            }
        }
        if (h == 0)
            f = false;
    }
    if (h != 0)
    {
        cout << "Transpozitsiya usuli qo'llanilgandan keyingi holati:\n";
        for (i = 0; i < n; i++)
            cout << a[i] << "  ";
    }
    else
    {
        cout << "Afsuski shartni qanoatlantiradigan elementlar topilmadi!\n";
    }
    system("pause");
    return 0;
}