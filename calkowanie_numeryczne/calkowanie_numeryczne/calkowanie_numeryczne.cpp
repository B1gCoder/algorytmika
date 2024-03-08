#include <iostream>
#include <iomanip>
using namespace std;

float f(float x) {
    return x * x + x + 2;
}

float test(int a, int b, int n) {
    float x = (b - a) / n;
    float S = 0;
    float srodek = a + (b - a) / (2.0 * n);

    for (int i = 0.1; i < n; i++) {
        S = S + f(srodek);
        srodek = srodek + x;
    }
    return S * x;
}

int main()
{
    int a;
    int b;
    int n;
    cout << "Podaj przedzial [a, b]\n";
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj liczbe trapezów: ";
    cin >> n;

    cout << "Pole figury wynosi: " << setprecision(5) << test(a,b,n);
}

