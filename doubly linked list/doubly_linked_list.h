#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>
using namespace std;

template<class T>
class DList {
private:
	struct Node
	{
		T data;
		Node* next;
		Node* prev;
	};

	Node* head;
	Node* tail;

public:
	DList();
	DList(T x);
	~DList();

	//inserting a node at the end
	void pushToEnd(T x);
	//inserting a node at the beginning
	void pushToFront(T x);
	//deleting last node
	void deleteLast();
	//deleting first node
	void deleteFirst();
	//вывод элементов списка в пр€мом и обратном пор€дке
	void printDList();
};

template<class T>
DList<T>::DList() {
	head = tail = nullptr;
}

template<class T>
DList<T>::DList(T x) {
	head = new Node;
	head->data = x;
	tail = head;

	head->prev = nullptr;
	tail->next = nullptr;
}

template<class T>
DList<T>::~DList() {
	while (head != nullptr) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

template<class T>
void DList<T>::pushToEnd(T x) {
	Node* temp = new Node;
	temp->data = x;
	temp->next = nullptr;
	if (head != nullptr) {
		temp->prev = tail;
		tail->next = temp;
		tail = temp;
	}
	else {
		temp->prev = nullptr;
		head = tail = temp;
	}
}

template<class T>
void DList<T>::pushToFront(T x) {
	Node* temp = new Node;
	temp->data = x;
	temp->prev = nullptr;
	if (head != nullptr) {
		temp->next = head;
		head->prev = temp;
		head = temp;
	}
	else {
		temp->next = nullptr;
		head = tail = temp;
	}
}

template<class T>
void DList<T>::deleteLast() {
	if (head == nullptr)
		throw "Doubly linked is empty";
	Node* temp = tail;
	tail = tail->prev;
	delete temp;
	if (tail == nullptr)
		head = tail;
	else
		tail->next = nullptr;
	
}

template<class T>
void DList<T>::deleteFirst() {
	if (head == nullptr)
		throw "Doubly linked is empty";
	Node* temp = head;
	head = head->next;
	delete temp;
	if (head == nullptr)
		tail = head;
	else
		head->prev = nullptr;
}

template<class T>
void DList<T>::printDList() {
	if (head == nullptr)
		throw "Doubly linked is empty";
	Node* temp = head;
	cout << "¬ывод списка в обычном пор€дке" << endl;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
	temp = tail;
	cout << "¬ывод списка в обрытном пор€дке" << endl;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->prev;
	}
	cout << endl;
}

#endif // !DOUBLY_LINKED_LIST_H