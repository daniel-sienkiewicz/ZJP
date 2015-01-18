#include <iostream>
#include "Rower.h"
using namespace std;

Rower::Rower(){
	cout << "Rower" << endl;
}

Rower::Rower(const double &maksymalnaPredkosc, const int &maksLiczbaPasazerow, int liczbaPrzerzutek) : Pojazd(maksymalnaPredkosc, maksLiczbaPasazerow) {
	cout << "Rower" << endl;
	this->liczbaPrzerzutek = liczbaPrzerzutek;
}
Rower::~Rower() {
	cout << "~Rower" << endl;
}

void Rower::info() {
	cout << "Jeste Rowere" << endl;
}
