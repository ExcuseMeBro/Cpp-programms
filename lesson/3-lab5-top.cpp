//5.Binar qidiruvdan foydalanib elementlarni tasodifiy ravishda toping
#include <iostream>
#include <ctime>
using namespace std;

int Random(int x, int y)
{
    srand(time(NULL));
    return (x + rand() % (y - x + 1));
}

int BinarQidiruv(int arr[], int l, int r, int x)
{
    if (r >= l)
    {

        int mid = Random(l, r);

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return BinarQidiruv(arr, l, mid - 1, x);

        return BinarQidiruv(arr, mid + 1, r, x);
    }

    return -1;
}

int main(void)
{
    int arr[] = {2, 1, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Qaysi elementni izlay? : ";
    cin >> x;
    int result = BinarQidiruv(arr, 0, n - 1, x);
    (result == -1) ? printf("Bunday element mavjud emas!\n")
                   : printf("Element indexi %d", result);
    return 0;
}