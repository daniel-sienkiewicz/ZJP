#include <iostream>
#include "SamochodOsobowy.h"
using namespace std;

SamochodOsobowy::SamochodOsobowy(){
	cout << "Samochod osobowy" << endl;
}

SamochodOsobowy::~SamochodOsobowy(){
	cout << "~Samochod osobowy" << endl;
}

void SamochodOsobowy::info() {
	cout << "Jeste Samochodem Osobowym" << endl;
}
