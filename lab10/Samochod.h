#ifndef _Samochod_
#define _Samochod_

#include <iostream>
#include "Pojazd.h"

using namespace std;
class Samochod : public Pojazd{
private:
	double pojemnoscSilnika;

public:
	Samochod();
	Samochod(double pojemnoscSilnika);
	Samochod(const double &maksymalnaPredkosc, const int &maksLiczbaPasazerow, double pojemnoscSilnika);
	~Samochod();
	virtual void info();

	void setPojemnoscSilnika(double pojemnoscSilnika){
		this->pojemnoscSilnika = pojemnoscSilnika;
	}

	double getPojemnoscSilnika(){
		return this->pojemnoscSilnika;
	}
};

#endif
