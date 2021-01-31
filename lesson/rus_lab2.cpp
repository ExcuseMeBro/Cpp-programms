// No.33
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input, even = 0, odd = 0;
    do
    {
        cout << "Пожалуйста, введите положительное целое число (отрицательное целое число, чтобы остановить):" << ' ';
        cin >> input;
        if ((input % 2 == 0) && (input >= 0))
            even++;
        else if ((input % 2 == 1) && (input >= 0))
            odd++;
    } while (input >= 0);

    cout << "Вы вошли" << ' ' << odd << ' ' << "нечетные числа." << endl;
    cout << "И" << ' ' << even << ' ' << "четные числа." << endl;
    cout << "И" << ' ' << 1 << ' ' << "отрицательное целое число." << endl;
    cout << "Все введенные числа " << even + odd + 1 << endl;
    return 0;
}