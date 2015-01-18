#include <iostream>
#include "Samochod.h"
using namespace std;

Samochod::Samochod() {
	cout << "Samochod" << endl;
}

Samochod::~Samochod() {
	cout << "~Samochod" << endl;
}

Samochod::Samochod(double pojemnoscSilnika){
	this->pojemnoscSilnika = pojemnoscSilnika;
}

Samochod::Samochod(const double &maksymalnaPredkosc, const int &maksLiczbaPasazerow,
		double pojemnoscSilnika) :
		Pojazd(maksymalnaPredkosc, maksLiczbaPasazerow) {
	cout << "Samochod" << endl;
	this->pojemnoscSilnika = pojemnoscSilnika;
}

void Samochod::info() {
	cout << "Jeste Samochodem" << endl;
}
