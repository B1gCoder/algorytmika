#include<iostream>
using namespace std;

long long fibo(int n);

int main()
{
	int n;

	cout << "podaj nr wyrazu ciagu: ";
	cin >> n;

	cout << n << " wyraz ciagu ma wartosc " << fibo(n) << endl;

	return 0;
}

long long fibo(int n) {
	if (n < 3) {
		return 1;
	}
		return fibo(n - 2) + fibo(n - 1);
}