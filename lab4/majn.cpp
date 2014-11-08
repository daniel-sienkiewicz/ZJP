#include<iostream>
using namespace std;

struct TZbior {
	int wartosc;
	TZbior * next;
};

void wyswietl(TZbior *glowa) {
	TZbior *element = glowa->next;
	cout << "Zbior mocy " << glowa->wartosc << " = { ";
	while (element != NULL) {
		cout << element->wartosc << " ";
		element = element->next;
	}
	cout << "}" << endl;
}

bool wstaw(TZbior *glowa, int x) {
	// czy x jest w zbiorze
	TZbior *element = glowa->next;
	while (element != NULL) {
		if (element->wartosc == x)
			return false;
		element = element->next;
	}
	// dodanie x do zbioru
	TZbior *nowy_element = new TZbior;
	nowy_element->next = glowa->next;
	nowy_element->wartosc = x;
	glowa->next = nowy_element;
	glowa->wartosc += 1;  // zwiêkszenie mocy zbioru
	return true;
}

bool sprawdz(TZbior *zbior, int wartosc) {
	TZbior *skoczek;
	bool czy = false;
	for (skoczek = zbior->next; skoczek != NULL; skoczek = skoczek->next) {
		if (skoczek->wartosc == wartosc)
			czy = true;
	}

	return czy;
}

void usun(TZbior *zbior, int wartosc) {
	TZbior * skoczek;

	for (skoczek = zbior; skoczek != NULL; skoczek = skoczek->next) {
		if (skoczek->next->wartosc == wartosc) {
			skoczek->next = skoczek->next->next;
			cout << "wywalone" << endl;
			zbior->wartosc--;
		}
	}
}

void zwolnijPamiec(TZbior *zbior) {
	TZbior * skoczek;

	for (skoczek = zbior; skoczek != NULL; skoczek = skoczek->next) {
		TZbior *tmp = skoczek;
		delete tmp;
	}
}

TZbior * init() {
	TZbior *zbior = new TZbior;
	zbior->next = NULL;   // brak elementow, koniec listy
	(*zbior).wartosc = 0; // moc zbioru

	return zbior;
}

void suma(TZbior * pierwszy, TZbior* drugi) {
	TZbior * skoczek;

	for (skoczek = drugi->next; skoczek != NULL; skoczek = skoczek->next) {
		wstaw(pierwszy, skoczek->wartosc);
	}
}

int main(void) {

	TZbior *zbior = init();

	wstaw(zbior, 1);
	wstaw(zbior, 4);
	wstaw(zbior, 3);
	wstaw(zbior, 4);
	wstaw(zbior, 1);
	wstaw(zbior, 9);
	wyswietl(zbior);

	cout << sprawdz(zbior, 2) << endl;
	cout << sprawdz(zbior, 1) << endl;

	usun(zbior, 1);
	cout << sprawdz(zbior, 1) << endl;
	cout << "Pierwszy" << endl;
	wyswietl(zbior);

	TZbior *drugi = init();
	wstaw(drugi, 1);
	wstaw(drugi, 4);
	wstaw(drugi, 3);
	wstaw(drugi, 4);
	wstaw(drugi, 1);
	wstaw(drugi, 8);
	cout << "Drugi" << endl;
	wyswietl(drugi);

	suma(zbior, drugi);
	cout << "Suma" << endl;
	wyswietl(zbior);

	zwolnijPamiec(zbior);
	zwolnijPamiec(drugi);
}

/*ZAD 1 i 2
 #include <iostream>
 #include <stdio.h>
 #include <fstream>
 using namespace std;

 int main() {
 fstream plik;
 string dane;
 int tablica [127];
 char literka;

 for(int i = 0; i < 127; i++)
 tablica[i] = 0;

 plik.open("test.txt", std::ios::in | std::ios::out);
 if (plik.good() == true) {
 cout << "good";
 while (!plik.eof()) {
 plik.get(literka);
 cout << literka;
 tablica[literka]++;
 cout << dane;
 }
 plik.close();
 }

 for(int i = 0; i < 127; i++)
 if(tablica[i] != 0){
 cout << char(i);
 cout << tablica[i] << endl;
 }

 return (0);
 }
 */
