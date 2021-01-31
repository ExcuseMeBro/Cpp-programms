#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Matn kiriting: ";
    getline(cin, str);
    int sanagich = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if ((i == 0) and (isupper(str[i])))
        {
            sanagich++;
        }
        else if ((str[i - 1] == ' ') and (isupper(str[i])))
        {
            sanagich++;
        }
    }
    cout << "Natija: " << sanagich << endl;
    return 0;
}