#include <bits/stdc++.h>
using namespace std;
void fillArray(int num[67])
{
    const int size = 67;
    for (int i = 0; i < size; i++) {
        num[i] = 1 + rand() % 100;
    }
}
int sortArray(int num[67]) 
{
    const int size = 67;
    int counter = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-1; j++) {
            if (num[j] > num[j + 1]) {
                swap(num[j],num[j + 1]);
                counter++;
            }
        }
    }
    return counter;
}
int main()
{
	const int size = 67;
    int num[67];
    int counter = 0;
    int sumcounter = 0;

    for (int i = 0; i < 50; i++) {
        fillArray(num);
        counter = sortArray(num);
        sumcounter += counter;
        cout << counter << endl;
    }
    cout << "Среднее число итераций = " << sumcounter/50 << endl;
	return 0;
}