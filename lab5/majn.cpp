#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>

using namespace std;

/* ZAD 1
 void pisz(double *tab, int wielkosc) {
 cout << endl << "Tablica = ";
 for (int i = 0; i < wielkosc; i++) {
 cout << *(tab + i) << " ";
 }
 }

 void pisz2(double * tabPoczatek, double * tabKoniec) {
 cout << endl << "Tablica = ";
 for (double * skoczek = tabPoczatek; skoczek != tabKoniec; skoczek++) {
 cout << *skoczek << " ";
 }
 }

 void wypelnij(double * tab, int wartosc, double wielkosc) {
 for (int i = 0; i < wielkosc; i++) {
 *(tab + i) = wartosc;
 }
 }

 void wypelnij2(double * tabPoczatek, double *tabKoniec, double wartosc) {
 for (double * skoczek = tabPoczatek; skoczek != tabKoniec; skoczek++) {
 *skoczek = wartosc;
 }
 }

 void max(double * tab, int wielkosc) {
 cout << endl << "Max = ";
 double max = *tab;
 for (int i = 0; i < wielkosc; i++) {
 if (max < *(tab + i)) {
 max = *(tab + i);
 }
 }
 cout << max << endl;
 }

 void max2(double * tabPoczatek, double * tabKoniec) {
 cout << endl << "Max = ";
 double max = *tabPoczatek;
 for (double * skoczek = tabPoczatek; skoczek != tabKoniec; skoczek++) {
 if (max < *skoczek) {
 max = *skoczek;
 }
 }
 cout << max << endl;
 }
 */

/* ZAD 2
 //w pliku jest 1
 void odwroc(string &napis) {
 reverse(napis.begin(), napis.end());
 cout << "Reverse =  " << napis << endl;
 }

 //w pliku jest 2
 void konkatenacja(string &napis) {
 string tmp = napis;
 reverse(tmp.begin(), tmp.end());
 napis = tmp + napis;
 cout << "Konkatenacja = " << napis << endl;
 }

 // w pliku jest 3
 void sDoN(string &napis) {
 string tmp = napis;
 for (int i = 0; i < tmp.length() - 1; i++) {
 napis += tmp;
 }
 cout << "s^n = " << napis << endl;
 }

 // w pliku jest 4
 void pierwsze(string &napis) {
 napis.erase(3, napis.length());
 cout << "3 pierwsze = " << napis << endl;
 }
 */

/* ZAD 3
 int sumuj(int liczba) {
 if (liczba == 1) {
 return 1;
 } else {
 return liczba + sumuj(liczba - 1);
 }
 }
 */

int main(void) {
	/* ZAD 1
	 double tablica[] = {3,4,1242,77,6,5,1234};
	 pisz(tablica, 7);
	 pisz2(tablica, tablica + 7);

	 max(tablica, 7);
	 max2(tablica, tablica+7);

	 wypelnij(tablica, 8, 7);
	 pisz(tablica, 7);

	 wypelnij2(tablica, tablica + 7, 9);
	 pisz2(tablica, tablica + 7);
	 */

	/* ZAD 2
	 string napis;
	 fstream plik;
	 int numer;

	 void (*funkcje[5])(string &);
	 funkcje[1] = odwroc;
	 funkcje[2] = konkatenacja;
	 funkcje[3] = sDoN;
	 funkcje[4] = pierwsze;

	 cout << "Podaj napis: ";
	 cin >> napis;

	 plik.open("skrypt.txt", std::ios::in | std::ios::out);
	 if (plik.good() == true) {
	 cout << "good" << endl;
	 while (!plik.eof()) {
	 plik >> numer;
	 funkcje[numer](napis);
	 }
	 plik.close();
	 }
	 */

	/* ZAD 3
	 int liczba;
	 cout << "Podaj liczbe: ";
	 cin >> liczba;
	 cout << "Suma: " << sumuj(liczba);
	 */

	return 0;
}
