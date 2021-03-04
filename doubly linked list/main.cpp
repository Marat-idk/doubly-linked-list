#include <iostream>
#include "doubly_linked_list.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");
	try {
		cout << "Adding items to the end of a doubly linked list and displaying it" << endl;
		DList<int> l;
		l.pushToEnd(1);
		l.pushToEnd(2);
		l.pushToEnd(3);
		l.pushToEnd(4);

		l.printDList();

		cout << "Adding elements to the beginning of a doubly linked list and displaying it" << endl;

		l.pushToFront(5);
		l.pushToFront(6);

		l.printDList();

		cout << "Deleting last element" << endl;

		l.deleteLast();

		l.printDList();

		cout << "Deleting first element" << endl;

		l.deleteFirst();

		l.printDList();
	}
	catch (const char* error) {
		cout << error << endl;
	}
	system("pause");
	return 0;
}