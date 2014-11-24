#ifndef _aaa_
#define _aaa_

#include <iostream>
using namespace std;
class funkcyjaKwadratowa {
private:
	int a;
	int b;
	int c;

public:
	int iloscPierwiastow();
	void pierwiastki();
	double wartosc(double x);

	void setA(int a) {
		this->a = a;
	}

	void setB(int b) {
		this->b = b;
	}

	void setC(int c) {
		this->c = c;
	}

	int getA(void) {
		return a;
	}
	int getB(void) {
		return b;
	}
	int getC(void) {
		return c;
	}
};

#endif
