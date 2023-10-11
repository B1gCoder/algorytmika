#include <iostream>
using namespace std;

int potega(int a, int n) {
	int w = 1;
	while (n > 0) 
	{
		if (n % 2 == 1)
		{
			w = w * a;
		}
		a = a * a;
		n = n / 2;
	}
	return w;
}

int main() 
{
	int a;
	int n;
	
	cout << "Podaj podstawe: ";
	cin >> a;

	cout << "Podaj wyk³adnik: ";
	cin >> n;

	int potegowanie = potega(a, n);
	cout << a << " do potêgi " << n << " wynosi: " << potegowanie;
}