//14.Berilgan   a va b sonlarining    EKUKini  topuvchi rekursiv  funksiya tuzing.
#include <iostream>
using namespace std;
long long EKUB(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return EKUB(b, a % b);
}
long long EKUK(int a, int b)
{
    return (a / EKUB(a, b)) * b;
}
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << "EKUK(" << a << "," << b << ")=" << EKUK(a, b) << endl;
    return 0;
}