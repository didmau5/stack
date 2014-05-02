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

void Stack::SetSize(int newSize)
{
	size = newSize;
}
		
void Stack::Print()
{
	cout << size << endl;
	
}
		
		/*GetSize(Stack *stack);
		SetSize(Stack *stack);
		Push();
		Pop();
		Print();*/



