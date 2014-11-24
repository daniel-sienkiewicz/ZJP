#include <iostream>
#include "funkcyjaKwadratowa.h"
using namespace std;

int funkcyjaKwadratowa::iloscPierwiastow() {
	int delta = b * b - 4 * a * c;
	if (delta > 0) {
		return 2;
	} else if (delta == 0) {
		return 1;
	} else {
		return 0;
	}
}

void funkcyjaKwadratowa::pierwiastki() {
	int delta = b * b - 4 * a * c;
	int x1, x2;
	if (delta > 0) {
		x1 = (-b - delta) / 2 * a;
		x2 = (-b + delta) / 2 * a;
		cout << x1 << " " << x2 << endl;
	} else if (delta == 0) {
		x1 = -b / 2 * a;
		cout << x1 << endl;
	} else {
		cout << "Brak pierwiastkow" << endl;
	}
}

double funkcyjaKwadratowa::wartosc(double x) {
	return x * x * a + b * x + c;
}
