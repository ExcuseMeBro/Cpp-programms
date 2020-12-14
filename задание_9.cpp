#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, p = 1, m = 0, t = 0, l = 0;
    cout << "Enter the number of floors n: ";
    cin >> n;
    cout << "Enter the floor number on which the balls are broken: ";
    cin >> k;
    cout << endl;

    for (int i = 1; i < 100000; i = i * 2)
    {
        if (n > i && n <= i * 2)
        {
            l = i * 2;
            i = 100000;
        }
    }
    if (k > n)
        cout << "The balls don't break!";
    if (k == n)
    {
        cout << "1 step ball No. 1 floor No." << n << "   crashed" << endl;
        cout << "Total steps: 1" << endl << "The balls break into" << n << " floor";
    }
    if (k < n)
    {
        for (int i = 2; i <= l; i = i * 2)
        {
            if (i >= n)
            {
                cout << p;
                cout << " step   ";
                cout.width(2);
                cout << "ball number 1";
                cout << "   floor no.";
                cout.width(2);
                cout << n - 1;
            }
            else
            {
                cout << p;
                cout << " step   ";
                cout.width(2);
                cout << "ball number 1";
                cout << "   floor no.";
                cout.width(2);
                cout << i;
            }
            if (i >= k)
            {
                if (i >= n)
                {
                    cout << "   crashed" << endl;
                    m = l;
                    i = l;
                }
                else
                {
                    cout << "   crashed" << endl;
                    m = i;
                    i = l;
                }
            }
            else
            {
                cout << "    no crashed" << endl;
            }
            p++;
        }
        l = m / 2 + 1;
        if (l > 2)
        {
            for (int j = l; j <= m; j++)
            {
                cout << p;
                cout << " step   ";
                cout << "ball number 2";
                cout << "   floor no.";
                cout.width(2);
                cout << j;
                if (j == k)
                {
                    cout << "   crashed" << endl
                         << endl;
                    t = j;
                    j = m;
                    cout << "Total steps: " << p << endl
                         << endl;
                    cout << "The balls break into " << t << " floor" << endl
                         << endl;
                }
                else
                {
                    cout << "   no crashed" << endl;
                }
                p++;
            }
        }
        else
        {
            cout << "Total step: 1" << endl;
            cout << "Balls break on the 2nd floor" << endl;
        }
    }

    return 0;
}
