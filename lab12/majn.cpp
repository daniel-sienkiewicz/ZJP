#include <iostream>
#include "TablicaAsoc.h"

using namespace std;
int main(void) {
	TablicaAsoc<string, string> t1;
	t1["d"] = "napis 1";
	t1["d"] = "napis 4";
	t1["e"] = "napis 2";
	t1["fff"] = "napis 3";
	t1.show();
	cout << endl;
	cout << "Rozmiar tablicy: " << t1.size() << endl;

	TablicaAsoc<double, char> t2;
	t2[3.2] = 'c';
	t2[3.3] = 'd';
	t2[3.2] = 'e';
	t2.show();
	cout << "Rozmiar tablicy: " << t2.size() << endl;

	return 0;
}
