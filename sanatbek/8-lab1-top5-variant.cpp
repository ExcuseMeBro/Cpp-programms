/*
5- Variant.
Sizga bitta natural son berilgan sizning vazifangiz shu sonning raqamlari yig’indisini topish.
 
Kiruvchi ma'lumotlar: Bitta satrda N berilgan N ko’pi bilan 500 xonali bo’lishi mumkin.
Chiquvchi ma’lumotlar: Masala yechimi
Kiruvchi ma’lumotlar	Chiquvchi ma’lumotlar
347	                        14
10000012	                4
*/
#include <cctype> // isdigit() funksiyasi uchun yozilgan
#include <iostream>
using namespace std;

#define charToInt(raqam) (raqam - '0')

int main()
{
    int summa = 0;
    string str;
    cout << "Berilgan sonni kiriting: ";
    cin>>str;
    for (int i = 0; i < str.length(); ++i)
    {
        if (isdigit(str[i]))
        {
            int a = charToInt(str[i]);
            summa = summa + a;
        }
    }
    cout << "Berilgan sonning raqamlari yig`indisi: " << summa << endl;
    return 0;
}