#include <iostream>        // This is a key C++ library
#include "stack.h"
#include "LList.h"

using namespace std;

//Default Constructor
Stack::Stack()
{
	size = 0;
}

int Stack::GetSize()
{
	return size;
}
		
void Stack::Print()
{
	cout << size << endl;
	
}

void Stack::Push(double data)
{
	stack.insertAtHead(data);
	size++;
}

double Stack::Pop()
{
	double data = stack.removeHead();
	if (data < 0){
		cout << "Nothing in the Stack" << endl;
		return -1;
	}
	else{
		size--;
		return data;
	}
}
		
		/*GetSize(Stack *stack);
		SetSize(Stack *stack);
		
		Pop();
		Print();*/



