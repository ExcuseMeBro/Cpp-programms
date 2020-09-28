//5.Elementlari o'sish tartibida joylashgan A massivni, elementlari kamayish tartibida joylashgan massiv ko’rinishida tez quruvchi dastur tuzing.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[] = {0, 1, 3, 5, 8, 9};
    int n = sizeof(A) / sizeof(A[0]);

    sort(A, A + n, greater<int>());

    cout << "Kamayish tartibida saralandi! =>  ";
    for (int i = 0; i < n; ++i)
        cout << A[i] << " ";

    return 0;
}