#include<iostream>
using namespace std;
//index???is very important u know 
class AList
{
public:
	AList()
	{
		size = 0;
		int* items = new int[100];
	}
	void addLast(int x) {};
	int getLast() {};
	int removeLast() {};
private:
	int size;
	int items[];
	
};

void AList::addLast(int x)
{
	if (size == sizeof(items))
	{
		int* newarray= new int[sizeof(items)*2];  
		delete items;
	}
	items[size] = x;
	size += 1;
}

int AList::getLast()
{
	return items[size - 1];
}

int AList::removeLast()
{
	int x = getLast();
	size -= 1;
	return x;
}

int main() 
{
	 
}