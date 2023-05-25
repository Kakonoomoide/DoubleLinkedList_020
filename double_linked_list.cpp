#include <iostream>
using namespace std;

class Node {
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

class DoubleLinkedList {
private:
	Node* START;
public:
	DoubleLinkedList();
	void addNode();
	bool search(int rollNO, Node** previous, Node** current);
	bool deleteNode(int rollNO);
	void listEmpty();
	void ascending();
	void descending();
	void hapus();
	void searchData();
};

DoubleLinkedList::DoubleLinkedList() {
	START = NULL;
}

int main()
{
    std::cout << "Hello World!\n";
}