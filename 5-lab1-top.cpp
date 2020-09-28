//A massivning eng katta (eng kichik) elementini ekranga chiqarish dasturini tuzing
#include <iostream>
using namespace std;
int main()
{
    int n, i, max, min;
    cout << "N = ";
    cin >> n;
    int A[n];
    cout << "Massiv elementlarini kiriting : ";
    for (i = 0; i < n; i++)
        cin >> A[i];
    max = A[0];
    for (i = 0; i < n; i++)
    {
        if (max < A[i])
            max = A[i];
    }
    min = A[0];
    for (i = 0; i < n; i++)
    {
        if (min > A[i])
            min = A[i];
    }
    cout << "Eng katta element : " << max << endl;
    cout << "Eng kichik element : " << min << endl;
    return 0;
}