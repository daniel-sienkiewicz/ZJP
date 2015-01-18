#ifndef _RowerGorski_
#define _RowerGorski_

#include <iostream>
#include "Rower.h"

using namespace std;
class RowerGorski : public Rower{

public:
	RowerGorski();
	~RowerGorski();
	virtual void info();
};

#endif
