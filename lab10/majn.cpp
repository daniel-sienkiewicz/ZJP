#include <iostream>
#include "Pojazd.h"
#include "Rower.h"
#include "RowerGorski.h"
#include "Samochod.h"
#include "SamochodDostawczy.h"
#include "SamochodOsobowy.h"

using namespace std;

void informacja1(Pojazd pojazd){
	pojazd.info();
}

void informacja2(Pojazd & pojazd){
	pojazd.info();
}

void informacja3(Pojazd * pojazd){
	pojazd->info();
}

int main(void) {
	Pojazd pojazd;
	Rower rower;
	RowerGorski rowerGorski;
	Samochod samochod;
	SamochodDostawczy samochodDostawczy;
	SamochodOsobowy samochodOsobowy;

//	pojazd.info();
//	rower.info();
//	rowerGorski.info();
//	samochod.info();
//	samochodDostawczy.info();
//	samochodOsobowy.info();
	informacja1(rower);
	informacja2(rower);
	informacja3(&rower);
}
