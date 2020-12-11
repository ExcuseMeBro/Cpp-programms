#include <bits/stdc++.h>
using namespace std;
int fib(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1; 
	return fib(n - 1) + fib(n - 2);
}
int factor(int n) {
	if (n < 0)
		return 0;
	if (n == 0)
		return 1;
	else 
		return n * factor(n - 1);
}
int main() {
	long long int fact = 1, fibi = 0;
	double q = 2, q1 = 1, q2 = 1, sum;
	int n;
	cout << "Введите число n:";
	cin >> n;
	cout << "Вывод факториала через рекурсию:" << endl;
	cout << factor(n) << endl;
	cout << "Вывод факториала через рекурсию:" << endl;
	for (int i = 1; i <= n; i++) {
		fact = fact * i;
	}
	cout << fact << endl;
	cout << "Вывод Фибоначчи через цикл:" << endl;
	cout << "0 1 1";
	while (q < n - 1)
	{
		sum = q1 + q2;
		q1 = q2;
		q2 = sum;
		q++;
		cout << sum << " ";
	}
	cout << endl;
	cout << "Вывод Фибоначчи через рекурсию:" << endl;
	for (int i = 0; i < n; i++) {
		cout << fib(i) << " ";
	}
	cout << endl;
	q = 2;
	q1 = 1; 
	q2 = 1;
	cout << endl;
	cout << "Для Fn = 1" << endl;
	cout << "Золотое сечение = " << q2 * sqrt(5) / n << endl;
	cout << "F(n)/f(n-1) = " << q2 / q1 << endl;
	cout << "Отношение меньше золотого сечения" << endl;
	while (q < n - 1)
	{
		sum = q1 + q2;
		q1 = q2;
		q2 = sum;
		cout << endl;
		cout << "Для Fn = " << q << endl;
		q++;
		cout << "Золотое сечение = " << q2 * sqrt(5) / n << endl;
		cout << "F(n)/f(n-1) = " << q2 / q1 << endl;
		if ((q2 / q1) < (q2 * sqrt(5) / n))
			cout << "Отношение меньше золотого сечения" << endl;
		else 
			if ((q2 / q1) == (q2 * sqrt(5) / n))
				cout << "Отношение равно золтому сечению" << endl;
			else
				cout << "Отношение больше золтого сечения" << endl;
	}
	return 0;
}
