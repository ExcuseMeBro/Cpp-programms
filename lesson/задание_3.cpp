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
    cout << "Enter the name of the save file:";
    getline(cin, name);
    fout.open(name);
    if (!fout.is_open())
    {
        n = 1;
        cout << "Input Error!" << endl;
    }
    if (n == 0)
    {
        cout << "Input a:";
        cin >> a;
        if (std::cin.fail())
        {
            n = 1;
            cout << "Input Error!" << endl;
        }
    }
    if (n == 0)
    {
        cout << "Input x1:";
        cin >> x1;
        if (std::cin.fail())
        {
            n = 1;
            cout << "Input Error!" << endl;
        }
    }
    if (n == 0)
    {
        cout << "Input x2:";
        cin >> x2;
        if (std::cin.fail())
        {
            n = 1;
            cout << "Input Error!" << endl;
        }
    }
    if (n == 0)
    {
        cout << "Input d:";
        cin >> d;
        if (std::cin.fail())
        {
            n = 1;
            cout << "Input Error!" << endl;
        }
    }
    if (n == 0)
    {
        if (d < 0 || x1 > x2 || d == 0)
        {
            n = 1;
            cout << "Input Error!" << endl;
        }
        if (n == 0)
        {
            fout << "Results:" << endl;
            for (; x1 <= x2; x1 += d)
            {
                y = a * sin(1. / x1);
                fout << "y" << z << " = " << y << endl;
                z++;
            }
        }
    }
    cout << "Open the file " << name << ", to see the results!\n";
    fout.close();
}
