#ifndef _Pojazd_
#define _Pojazd_

#include <iostream>

using namespace std;
class Pojazd {
private:
	double maksymalnaPredkosc;
	int maksLiczbaPasazerow;

public:
	virtual void info();

	void setMaxPredkosc(double maxPredkosc) {
		this->maksymalnaPredkosc = maxPredkosc;
	}

	double getMaxPredkosc(){
		return this->maksymalnaPredkosc;
	}

	void setmaxPasazerowie(int maxPasazerowie){
		this->maksLiczbaPasazerow = maxPasazerowie;
	}

	int getMaxPasazerowie(){
		return maksLiczbaPasazerow;
	}
};

#endif
