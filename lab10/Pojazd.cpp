#include <iostream>
#include "Pojazd.h"
using namespace std;

void Pojazd::info() {
	cout << "Jeste Pojazde" << endl;
}

Pojazd::Pojazd(){

}

Pojazd::Pojazd(double maksymalnaPredkosc, int maksLiczbaPasazerow){
	cout << "Pojazd" << endl;
	this->maksLiczbaPasazerow = maksLiczbaPasazerow;
	this->maksymalnaPredkosc = maksymalnaPredkosc;
}

Pojazd::~Pojazd(){
	cout << "~Pojazd" << endl;
}
