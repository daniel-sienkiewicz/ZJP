#ifndef _Lista_
#define _Lista_
#include <iostream>

template<typename T1, typename T2>
class Lista {
public:
	Lista();
	T2& addElement(T1);
	void printList();
	int getSize();
protected:
private:
	struct Node {
		Node *next;
		T1 key;
		T2 value;
	};
	Node *root;
	int size;
};

template<typename T1, typename T2>
Lista<T1, T2>::Lista() {
	root = NULL;
	size = 0;
}

template<typename T1, typename T2>
T2& Lista<T1, T2>::addElement(T1 t1) {
	Node *newNode = new Node();
	newNode->key = t1;
	newNode->next = NULL;

	if (root == NULL) {
		root = newNode;
		size++;
		return root->value;
	}
	Node *t = root;

	while (t != NULL) {
		if (t->key == t1) {
			return t->value;
		}
		if (t->next == NULL) {
			t->next = newNode;
			size++;
			return t->next->value;
		}
		t = t->next;
	}
}

template<typename T1, typename T2>
void Lista<T1, T2>::printList() {
	Node *p = root;
	while (p != NULL) {
		std::cout << "[" << p->key << "]=>" << p->value << std::endl;
		p = p->next;
	}
}

template<typename T1, typename T2>
int Lista<T1, T2>::getSize() {
	return size;
}

#endif
