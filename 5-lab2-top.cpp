//2.A massiv elementlari qiymatlarini kamayish tartibida saralash dasturini tuzing.
#include <iostream>
using namespace std;
void Sarala(int a[], int n)
{
    int i, j, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (a[j] > a[min])
                swap(a[j], a[min]);
    }
}
int main()
{
    int a[] = {8, 10, 81, 75, 99, 1, 67};
    int n = sizeof(a) / sizeof(a[0]);
    int i;
    cout << "Berilgan massiv:" << endl;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    Sarala(a, n);
    printf("\nSaralangandan keyin: \n");
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}