#include <iostream>        // This is a key C++ library
#include <cmath> 
#include "stack.h"
#include "LList.h"
#include "stack.cpp"
#include "LList.cpp"

using namespace std;

int main ()
{

	cout << "Hello" <<endl;
	
	//Stack stack;
	//stack.Print();
	
	LList list;
	list.insertAtHead(1.0);
	list.insertAtHead(1.1);
	list.insertAtHead(1.2);
	list.printList();
	return 0;

}