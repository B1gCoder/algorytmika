#include <iostream>
using namespace std;

float ciag(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 0.5;
	}
	return -ciag(n - 1) * ciag(n - 2);
}

int main()
{
	int n;

	cout << "Podaj nr wyrazu ciagu, ktorego wartosc chcesz policzyc: ";
	cin >> n;

	cout << n << " wyraz ciagu ma wartosc: " << ciag(n);
}