/*5."Mersedes" markali mashina egalarini alifbo bo’yicha teskari tartibda joylashtiring.*/
#include <bits/stdc++.h>
using namespace std;
class car
{
public:
    string name;
    void set(string x)
    {
        name = x;
    }
    void show(void)
    {
        cout << "Name: " << name << endl;
    }
    void saralash(car a[], int n)
    {
        int i, j;
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
            {
                if (a[i].name[0] > a[j].name[0])
                    swap(a[i].name, a[j].name);
            }
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
            {
                if (a[i].name[1] > a[j].name[1])
                    swap(a[i].name, a[j].name);
            }
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
            {
                if (a[i].name[2] > a[j].name[2])
                    swap(a[i].name, a[j].name);
            }
    }
};
int main()
{
    int i, n;
    string x;
    cout << "Mashina egalari sonini kiriting: ";
    cin >> n;
    car a[n + 1];
    for (i = 1; i <= n; i++)
    {
        cout << "Name(" << i << ")= ";
        cin >> x;
        a[i].set(x);
    }
    a[1].saralash(a, n);
    cout << "<<----Ro`yhat Muvaffaqiyatli Saralandi!---->>\n";
    for (i = 1; i <= n; i++)
        a[i].show();
}