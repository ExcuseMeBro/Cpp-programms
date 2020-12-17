// No.33
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, x2 = 26.5, deltax = 3.5;
    cout << "a = ";
    cin >> a;
    double y = 0;
    for (double x1 = -8.5; x1 <= x2; x1 += deltax)
    {
        y = 1 / (sqrt(asin(x1 - a)));
        cout << y << endl;
    }
    return 0;
}
