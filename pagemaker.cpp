#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=0;
    cin>>a;
    cin>>b;
    cout<<"orqa tomoni:";
    while (a<=b) {
        if (a%2 == 0) {
            cout<<a<<",";
        }
        a++;
    }
    cout<<endl<<"oldi tomoni:";
    while (2<b) {
        if (b%2 == 1) {
            cout<<b<<",";
        }
        b--;
    }
    cout<<endl;
}