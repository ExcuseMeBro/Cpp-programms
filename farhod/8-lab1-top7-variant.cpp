#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string str;
    int v = 0;
    cout << "Matn kiriting: ";
    getline(cin,str);
    for (int i = 0; str[i]!='\0'; ++i)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            ++v;
    }
    cout << "Unli harflar soni : " << v<<endl;
    return 0;
}