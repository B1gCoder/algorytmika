#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "Podaj a: ";
  cin >> a;
  int b;
  cout << "Podaj b: ";
  cin >> b;
  if (a < b) {
    cout << "Twoja liczba po odjęciu: " << a - b;
  } else {
    cout << "Twoja liczba po odjęciu: " << b - a;
  }
  return 0;
}
