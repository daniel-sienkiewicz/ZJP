#ifndef _SamochodOsobowy_
#define _SamochodOsobowy_

#include <iostream>
#include "Samochod.h"

using namespace std;
class SamochodOsobowy : public Samochod{
public:
	SamochodOsobowy();
	~SamochodOsobowy();
	virtual void info();
};

#endif
