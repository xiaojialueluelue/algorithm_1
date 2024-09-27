#include<iostream>
using namespace std;
template <class Type>
class RLList
{
public:
	RLList()
	{
		sentinel = new Node(0, NULL, NULL);
		sentinel->next = sentinel;
		sentinel->prev = sentinel;
		size = 0;
	}
	RLList(Type d) 
	{
		sentinel = new Node(0, NULL, NULL);
		Node* newNode = new Node(d, sentinel, sentinel);
		sentinel->next = newNode;
		sentinel->prev = newNode;
		size = 1;
	}
	void addFirst(Type d)
	{
		Node* p = sentinel;
		if (p->prev != sentinel)
		{
			p = p->prev;
		}
		Node* newNode = new Node(d, sentinel->next, sentinel);
		p->prev = newNode;
		sentinel->next = newNode;
		size += 1;  
	}
private:
	class Node
	{
	public:
		Type data;
		Node* next;
		Node* prev;
		Node(Type d, Node* n, Node* p)
		{
			this->data = d;
			this->next = n;
			this->prev = p;
		}
	};
	Node* sentinel;
	int size;

};

int main()
{
	
	return 0;
}