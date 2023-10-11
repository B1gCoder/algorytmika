#include <iostream>
using namespace std;

int szukanie(int tab[], int szukana, int l, int p, int sr) {
	while (l <= p) {
		if (tab[sr] == szukana)
		{
			return sr;
		}

		if (tab[sr] > szukana)
		{
			p = sr - 1;
		}

		else
		{
			l = sr + 1;
		}
		sr = (l + p) / 2;
	}

	return -1;
}

int main(void) {
	int tab[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	int szukana = 0;
	int l = 0;
	int p = 15;
	int sr = (l + p) / 2;

	cout << "Podaj liczbê, któr¹ chcesz znaleŸæ: ";
	cin >> szukana;

	int wynik = szukanie(tab, szukana, l, p, sr);


	if (wynik == -1)
	{
		cout << "Brak";
	}
	else
	{
		cout << "Liczba " << szukana << " wystêpuje w zbiorze w komórce o indeksie " << wynik;
	}
}