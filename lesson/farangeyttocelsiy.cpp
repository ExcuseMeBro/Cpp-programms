#include <bits/stdc++.h>
using namespace std;
int main()
{
    float cel, far;

    printf("\nВведите температуру в градусах Фаренгейта:");
    scanf("%f", &far);

    cel = (far - 32) * 5 / 9;
    printf("\nЦельсия = %.3f", cel);
    cout << endl;
    return 0;
}