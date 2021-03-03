#include <iostream>
#include "doubly_linked_list.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");
	try {
		cout << "Добавление элементов в конец двусвязного списока и его вывод" << endl;
		DList<int> l;
		l.pushToEnd(1);
		l.pushToEnd(2);
		l.pushToEnd(3);
		l.pushToEnd(4);

		l.printDList();

		cout << "Добавление элементов в начало двусвязного списока и его вывод" << endl;

		l.pushToFront(5);
		l.pushToFront(6);

		l.printDList();

		cout << "Удаление последнего элемента" << endl;

		l.deleteLast();

		l.printDList();

		cout << "Удаление первого элемента" << endl;

		l.deleteFirst();

		l.printDList();
	}
	catch (const char* error) {
		cout << error << endl;
	}
	system("pause");
	return 0;
}