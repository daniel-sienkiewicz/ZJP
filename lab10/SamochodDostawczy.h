#ifndef _SamochodDostawczy_
#define _SamochodDostawczy_

#include <iostream>
#include "Samochod.h"

using namespace std;
class SamochodDostawczy : public Samochod{
private:
	double maksMasaZaladunku;

public:
	virtual void info();
	void setMaxZaladunek(double maxZaladunek){
		this->maksMasaZaladunku = maxZaladunek;
	}
};

#endif
