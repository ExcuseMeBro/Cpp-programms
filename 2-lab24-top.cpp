//24-topshiriq
#include <bits/stdc++.h>

using namespace std;

int main(){
    double x;
    cout<<"x = ";
    cin>>x;
    cout<<"Natija: "<<log(x*x+2)-sin(x)*sin(x)+pow((2-sqrt(abs(x))),1./5)+sin(M_PI/(exp(x)+1))<<endl;
    return 0;
}