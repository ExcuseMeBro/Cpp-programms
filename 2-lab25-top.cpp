//25-topshiriq
#include <bits/stdc++.h>

using namespace std;

int main(){
    double x;
    cout<<"x = ";
    cin>>x;
    cout<<"Natija: "<<x*(log10(M_E)/log10(2))-cos(x/M_PI)+pow((abs(tan(2*x)/(2.6+pow(x,2)+pow(x,3)))),1.0/3)<<endl;
    return 0;
}