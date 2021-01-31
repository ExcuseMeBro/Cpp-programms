#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, k, a[100][100], i, j;
    printf("Введите количество строк m = ");
    scanf("%d", &m);
    printf("Введите количество столбцов n = ");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            printf("Введите элемент в %d%d должность ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    cout << "Введите произвольное число k = ";
    cin >> k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == k)
            {
                swap(a[0][j], a[i][j]);
                i=n+1; 
                j=m+1;
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}