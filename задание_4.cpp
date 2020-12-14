#include <bits/stdc++.h>
using namespace std;
int NOD(int A, int B)
{
    int k = 1;
    while ((A != 0) && (B != 0))
    {
        while ((A % 2 == 0) && (B % 2 == 0))
        {
            A /= 2;
            B /= 2;
            k *= 2;
        }
        while (A % 2 == 0)
            A /= 2;
        while (B % 2 == 0)
            B /= 2;
        if (A >= B)
            A -= B;
        else
            B -= A;
    }
    return B * k;
}
int main()
{
    int array[4];
    int k = 0, m2 = 0, m = 0, nStep = 0, nod;
    ifstream file("in_val.txt");
    if (!file.is_open())
    {
        cout << "The file cannot be opened!\n";
    }
    else
        while (!file.eof())
        {
            file >> array[k++];
        }
    file.close();
    for (int i = 0; i < k; ++i)
    {
        if (array[i] > m)
        {
            m = array[i];
        }
    }
    for (int i = 0; i < k; ++i)
    {
        if ((abs((m / 2) - array[i])) < (abs(m2 - (m / 2))))
        {
            m2 = array[i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        nod = NOD(array[i], array[i + 1]);
        ++nStep; 
    }
    cout << "GCD = " << nod << endl;
    cout << "GCD steps = " << nStep << endl;
    cout << "m = " << m << endl;
    cout << "m/2 = " << m2 << endl;
    int NODm_m2 = NOD(m, m2);
    cout << "NOK = " << ((m * m2) / (NODm_m2)) << endl;
    ofstream fout;
    fout.open("solved.txt");
    if (fout.is_open())
    {
        fout << "List of prime numbers from 1 to m: \n";
        int i = 0, nStep2 = 0;
        int *a = new int[m + 1];
        for (int i = 0; i <= m; i++)
            a[i] = i;
        for (int i = 2; i * i <= m; i++)
        {
            if (a[i])
                for (int j = i * i; j <= m; j += i)
                    a[j] = 0;
            nStep2++; 
        }
        for (int i = 2; i < m; i++)
        {
            if (a[i])
            {
                fout << a[i] << endl;
            }
        }
        if (nStep2 > sqrt(m))
        {
            fout << "The number of steps is greater than the root of m";
            fout.close();
            return 0;
        }
        else
        {
            if (nStep2 < sqrt(m))
            {
                fout << "The number of steps is less than the root of m ";
                fout.close();
                return 0;
            }
            if (nStep2 == sqrt(m))
            {
                fout << "The number of steps is equal to the root of m";
                fout.close();
                return 0;
            }
        }
    }
    else
        cout << "The file cannot be opened!\n";
    return 0;
}
