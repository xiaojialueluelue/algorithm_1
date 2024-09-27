#include<iostream>
#include<string>
using namespace std;
//The first ndoe is always right behind the sentinel;
//double linked list for DLLIST single linked list for SLList
//last can be another sentinel
template<class Type>
class List
{
public:
	List(Type x) {
		sentinel = new Node(NULL, NULL, NULL);
		sentinel->next = new Node(x,sentinel,sentinel);
		Size = 1;
	}
	List() {
		sentinel = new Node(NULL, NULL, NULL);
		Size = 0;
	}

	void addFirst(Type x) {
		sentinel->next = new Node(x, sentinel, sentinel->next);
		Size += 1;
	}

	Type getFirst() {
		return sentinel->next->data;
	}

	void addLast(Type x) {
		Size += 1;
		Node* p = sentinel;
		while (p->next != NULL) {
			p = p->next;
		}

		p->next = new Node(x, sentinel, NULL);

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
		Type data;
		Node* next;
		Node* prev;
		Node(Type d, Node* n, Node* p) {
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
	List<int>* L = new List<int>(5);
	L->addFirst(120);
	L->addFirst(1000);
	std::cout << L->getFirst();
	List<string> l("hello world");
	std::cout << l.getFirst();
	return 0;
}