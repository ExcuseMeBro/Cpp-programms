//25.Berilgan satrdagi sonlar yig‘indisini aniqlang.
#include <iostream>
using namespace std;
int Summa(string str)
{
    string temp = "";
    int sum = 0;
    for (char ch : str)
    {
        if (isdigit(ch))
            temp += ch;
        else
        {
            sum += atoi(temp.c_str());
            temp = "";
        }
    }
    return sum + atoi(temp.c_str());
}
int main()
{
    string str;
    cout << "Satr kiriting: ";
    cin >> str;

    cout << Summa(str) << endl;

    return 0;
}