#ifndef _Rower_
#define _Rower_

#include <iostream>
#include "Pojazd.h"

using namespace std;
class Rower : public Pojazd {
private:
	int liczbaPrzerzutek;

public:
	virtual void info();
	void setIloscPrzerzutek(double iloscPrzerzutek) {
		this->liczbaPrzerzutek = iloscPrzerzutek;
	}

	double getIloscPrzerzutek() {
		return this->liczbaPrzerzutek;
	}
};

#endif
