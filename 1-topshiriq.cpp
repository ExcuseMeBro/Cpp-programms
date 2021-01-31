#include <iostream>
using namespace std;

bool sonni_tublikka_tekshirish(int n)
{
    int i;
    bool tub = true;

    if (n == 0 || n == 1)
    {
        tub = false;
    }
    else
    {
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                tub = false;
                break;
            }
        }
    }
}
int main()
{
    int n, i;
    bool indikator = false;

    cout << "N = ";
    cin >> n;

    for (i = 2; i <= n / 2; ++i)
    {
        if (sonni_tublikka_tekshirish(i))
        {
            if (sonni_tublikka_tekshirish(n - i))
            {
                cout << n << " = " << i << " + " << n - i << endl;
                indikator = true;
            }
        }
    }

    if (!indikator)
        cout << n << " --> bu sonni tub sonlar yig`indisi ko`rinishida ifodalab bo`lmaydi!";

    return 0;
}
