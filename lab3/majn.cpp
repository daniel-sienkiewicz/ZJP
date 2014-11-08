#include <iostream>
#include <string>
using namespace std;

int main(void) {

	union {
		char imie[50];
		char nazwisko[50];
		char telefon[50];
	};
	while (true) {
		cout << "Podaj imie: ";
		cin >> imie;
		cout << "Podaj nazwisko: ";
		cin >> nazwisko;
		cout << " Podaj telefon: ";
		cin >> telefon;
		cout << imie << nazwisko << telefon;

	}
	return 0;
}
