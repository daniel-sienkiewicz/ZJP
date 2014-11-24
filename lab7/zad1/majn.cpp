#include <iostream>
#include "funkcyjaKwadratowa.h"

using namespace std;

int main(void) {
	funkcyjaKwadratowa cos;
	int a, b, c;
	double war;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;
	cout << "Podales: " << a << "x^2 + " << b << "x" << " + " << c;
	cos.setA(a);
	cos.setB(b);
	cos.setC(c);
	cout << endl << "Podaj wartosc: ";
	cin >> war;
	cout << cos.wartosc(war);
	cout << endl << "Ilosc pierwiastow: ";
	cout << cos.iloscPierwiastow() << endl;
	cout << "Pierwiastki: ";
	cos.pierwiastki();
	return 0;
}
