/*1.Navbatda birinchi va oxirgi elementlar o’rni almashtirilsin*/
#include <bits/stdc++.h>
using namespace std;
void rev(stack<int> &x)
{
    int sz = x.size(), mytop, mybottom;
    mytop = x.top();
    x.pop();
    int tmp[sz - 1], i = 0;
    while (!x.empty())
    {
        mybottom = x.top();
        tmp[i++] = mybottom;
        x.pop();
    }
    stack<int> returnIt;
    returnIt.push(mybottom);
    for (i = 0; i <= sz - 3; i++)
    {
        returnIt.push(tmp[i]);
    }
    returnIt.push(mytop);
    while (!returnIt.empty())
    {
        int tt = returnIt.top();
        x.push(tt);
        returnIt.pop();
    }
}
int main()
{
    stack<int> x;
    x.push(10);
    x.push(24);
    x.push(35);
    x.push(49);
    x.push(50);
    stack<int> y = x;
    cout << "Almashtirishdan oldin : ";
    while (!y.empty())
    {
        int tt = y.top();
        cout << tt << " ";
        y.pop();
    }

    rev(x);
    cout << "\nAlmashtirilgandan keyin : ";
    while (!x.empty())
    {
        cout << x.top() << " ";
        x.pop();
    }
    cout << endl;
    return 0;
}