#include <iostream>        // This is a key C++ library
#include "stack.h"

using namespace std;

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
		
		
		/*GetSize(Stack *stack);
		SetSize(Stack *stack);
		Push();
		Pop();
		Print();*/



