#include <iostream>
#include "SamochodDostawczy.h"
using namespace std;

SamochodDostawczy::SamochodDostawczy(){
	cout << "Samochod dostawczy" << endl;
}

SamochodDostawczy::~SamochodDostawczy(){
	cout << "~Samochod dostawczy" << endl;
}

SamochodDostawczy::SamochodDostawczy(const double &pojemnoscSilnika, const double maksMasaZaladunku) : Samochod(pojemnoscSilnika){
	this->maksMasaZaladunku = maksMasaZaladunku;
}

void SamochodDostawczy::info() {
	cout << "Jeste Samochodem Dostawczym" << endl;
}
