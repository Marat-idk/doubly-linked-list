#include <iostream>
#include "doubly_linked_list.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");
	try {
		cout << "���������� ��������� � ����� ����������� ������� � ��� �����" << endl;
		DList<int> l;
		l.pushToEnd(1);
		l.pushToEnd(2);
		l.pushToEnd(3);
		l.pushToEnd(4);

		l.printDList();

		cout << "���������� ��������� � ������ ����������� ������� � ��� �����" << endl;

		l.pushToFront(5);
		l.pushToFront(6);

		l.printDList();

		cout << "�������� ���������� ��������" << endl;

		l.deleteLast();

		l.printDList();

		cout << "�������� ������� ��������" << endl;

		l.deleteFirst();

		l.printDList();
	}
	catch (const char* error) {
		cout << error << endl;
	}
	system("pause");
	return 0;
}