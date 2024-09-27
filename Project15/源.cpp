#include<iostream>
using namespace std;
//The first ndoe is always right behind the sentinel;
//double linked list for DLLIST single linked list for SLList
//last can be another sentinel
class List
{
public:
	List(int x) {
		sentinel = new Node(0,NULL,NULL);
		sentinel->next = new Node(x,NULL, NULL);
		Size = 1;
	}
	List() {
		sentinel = new Node(0,NULL,NULL);
		Size = 0;
	}

	void addFirst(int x) {
		sentinel->next = new Node(x,sentinel, sentinel->next);
		Size += 1;
	}

	int getFirst() {
		return sentinel->next->data;
	}

	void addLast(int x) {
		Size += 1;
		Node* p = sentinel;
		while (p->next != NULL) {
			p = p->next;
		}

		p->next = new Node(x,sentinel, NULL);
		
	}
	// for safe
	int Size;//用少许的空间换取时间
	int size() {
		return Size;
	}

	void removeLast() {

	}

private:
	class Node
	{
	public:
		int data;
		Node* next;
		Node* prev;
		Node(int d, Node* n,Node *p) {
			this->data = d;
			this->next = n;
			this->prev = p;
		}
	};
	Node* sentinel;
	Node* last;
	//int size(Node *p) {
	//	if (p->next == NULL) {
	//		return 1;
	//	}
	//	return 1 + size(p->next);
	//}
};



int main() {
	List *L = new List(5);
	L->addFirst(120);
	L->addFirst(1000);
	std::cout<<L->getFirst();
	return 0;
}