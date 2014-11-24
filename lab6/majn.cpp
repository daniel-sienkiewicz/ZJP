#include <iostream>

using namespace std;

/* ZAD 1
int funkcyja(int i) {

	return i;
}

int funkcyja(double k) {
	static int ilosc = 0;
	ilosc++;
	cout << "Ilosc wywolan = " << ilosc << endl;
	for (int i = 0; i < ilosc; i++) {
		cout << k << " ";
	}
	cout << endl;

	return 0;
}

int funkcyja(void) {
	static int ilosc = 0;
	if (ilosc == 0) {
		cout << "Ala ma kota" << endl;
	}
	ilosc++;
	return 0;
}*/

template<typename K, typename L>
struct TStruct
{
    K pole1;
    L pole2;
};

template<typename K, typename L>
void funkcja(const TStruct<K,L> & str)
{
    std::cout << str.pole1 << " " << str.pole2 << std::endl;
}

int main(void) {
	/* ZAD 1

	cout << "Pierwsze funkcyja(2) = " << funkcyja(2) << endl;
	cout << "Drugie funkcyja(3) = " << funkcyja(3) << endl;
	cout << "Trzecie funkcyja(1) = " << funkcyja(1) << endl;

	cout << "Pierwsze funkcyja(2.3)" << endl;
	funkcyja(2.3);
	cout << "Drugie funkcyja(3.3)" << endl;
	funkcyja(3.3);
	cout << "Trzecie funkcyja(1.3)" << endl;
	funkcyja(1.3);

	cout << "Pierwsze funkcyja()" << endl;
	funkcyja();
	cout << "Drugie funkcyja()" << endl;
	funkcyja();
	cout << "Trzecie funkcyja()" << endl;
	funkcyja();
*/

	TStruct<std::string, int> l;

    l.pole1 = "ala ma kota";
    l.pole2 = 14;

    funkcja(l);

	return 0;
}
