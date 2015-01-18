#ifndef _TablicaAsoc_
#define _TablicaAsoc_
#include <iostream>
#include "Lista.h"

template<typename T1, typename T2>
class TablicaAsoc {

public:
	TablicaAsoc();
	virtual ~TablicaAsoc();
	void show();
	int size();
	virtual T2 & operator[](T1 i);
private:
	Lista<T1, T2> l;
};

template<typename T1, typename T2>
TablicaAsoc<T1, T2>::TablicaAsoc() {
}

template<typename T1, typename T2>
TablicaAsoc<T1, T2>::~TablicaAsoc() {
}

template<typename T1, typename T2>
void TablicaAsoc<T1, T2>::show() {
	l.printList();
}

template<typename T1, typename T2>
T2& TablicaAsoc<T1, T2>::operator[](T1 i) {
	T2 &t2 = l.addElement(i);
	return t2;
}

template<typename T1, typename T2>
int TablicaAsoc<T1, T2>::size() {
	return l.getSize();
}

#endif
