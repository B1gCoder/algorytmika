#include <iostream>
using namespace std;

long long silnia(int n)
{
	if (n < 1)
		return 1;

	return n * silnia(n - 1);
}

int main() {

	int n;

	cout << "Podaj liczb�: ";
	cin >> n;

	cout << "Silnia z liczby " << n << " wynosi " << silnia(n) << endl;

}