#include <iostream>
#include <iomanip>

using namespace std;

void interpretuj(int literka) {
	if (literka > 9) {
		cout << (char) (literka + 55);
	} else {
		cout << literka;
	}
}

void dec(int liczba) {
	cout << setw(6) << liczba << setw(6);
}

void hex(int liczba) {
	int tmp, i = 0;
	int odp[255];

	for (i = 255; i > 0; i--) {
		odp[i] = -1;
	}

	while (liczba != 0) {
		tmp = liczba % 16;
		odp[i] = tmp;
		liczba /= 16;
		i++;
	}
	for (i = 255; i >= 0; i--) {
		if (odp[i] != -1)
			interpretuj(odp[i]);
	}
}

void oct(int liczba) {
	int tmp, i = 0;
	int odp[255];

	for (i = 255; i > 0; i--) {
		odp[i] = -1;
	}

	while (liczba != 0) {
		tmp = liczba % 8;
		odp[i] = tmp;
		liczba /= 8;
		i++;
	}
	for (i = 255; i >= 0; i--) {
		if (odp[i] != -1)
			cout << odp[i];
	}
}

int main(void) {
	/* ZAD 1 */

	int liczba;
	while (true) {
		cout << "Podaj liczbe: ";
		cin >> liczba;
		cout << "+-----------+-----------+-----------+" << endl;
		cout << "|    dec    |    hex    |    oct    |" << endl;
		cout << "+-----------+-----------+-----------+" << endl;
		cout << "|";
		dec(liczba);
		cout << "|" << setw(6);
		hex(liczba);
		cout << setw(6) << "|" << setw(6);
		oct(liczba);
		cout << setw(6) << "|" << endl;
		cout << "+-----------+-----------+-----------+" << endl;
	}
	return 0;
}
