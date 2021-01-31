//21.Kiritilgan ismning harflarini alfavit bo‘yicha tartibga keltiring.
#include <bits/stdc++.h>
using namespace std;
void tartiblash(string &str)
{
    sort(str.begin(), str.end());
    cout << str << endl;
}
int main()
{
    string s;
    cout << "Satr kiriting: ";
    cin >> s;
    tartiblash(s);
    return 0;
}