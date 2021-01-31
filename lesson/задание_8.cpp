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
	cout << "Enter number n = ";
	cin >> n;
	cout << "Factorial inference through recursion:" << endl;
	cout << factor(n) << endl;
	cout << "Factorial inference through recursion:" << endl;
	for (int i = 1; i <= n; i++) {
		fact = fact * i;
	}
	cout << fact << endl;
	cout << "Fibonacci inference through a loop:" << endl;
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
	cout << "Fibonacci inference through recursion:" << endl;
	for (int i = 0; i < n; i++) {
		cout << fib(i) << " ";
	}
	cout << endl;
	q = 2;
	q1 = 1; 
	q2 = 1;
	cout << endl;
	cout << "For Fn = 1" << endl;
	cout << "Golden ratio = " << q2 * sqrt(5) / n << endl;
	cout << "F(n)/f(n-1) = " << q2 / q1 << endl;
	cout << "The ratio is less than the golden ratio" << endl;
	while (q < n - 1)
	{
		sum = q1 + q2;
		q1 = q2;
		q2 = sum;
		cout << endl;
		cout << "For Fn = " << q << endl;
		q++;
		cout << "Golden ratio = " << q2 * sqrt(5) / n << endl;
		cout << "F(n)/f(n-1) = " << q2 / q1 << endl;
		if ((q2 / q1) < (q2 * sqrt(5) / n))
			cout << "The ratio is less than the golden ratio" << endl;
		else 
			if ((q2 / q1) == (q2 * sqrt(5) / n))
				cout << "The ratio is equal to the golden ratio" << endl;
			else
				cout << "The ratio is greater than the golden section" << endl;
	}
	return 0;
}
