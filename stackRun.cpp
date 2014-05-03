#include <iostream>        // This is a key C++ library
#include <cmath> 
#include <string>
#include "stack.h"
#include "LList.h"
#include "stack.cpp"
#include "LList.cpp"

using namespace std;

int main ()
{

	std::string pushStr ("push");
	std::string popStr ("pop");
	std::string quitStr ("quit");
	double data;
	double result;
	std::string command;
	
	Stack testStack;
	
	
	while(quitStr.compare(command)!=0)
	{
		cout << ">>Please enter a push or pop command (or quit to quit):<<" <<endl;
	
		cin >> command;
		
		//if push, then additional arguement data to push
		if (pushStr.compare(command) == 0){
			cout << "Enter double to push:" <<endl;
			cin >>data;
			cout << "PUSH: " << data << endl;
			testStack.Push(data);
			command = '\0';
		}
		//else pop, only 1 arguement
		else if(popStr.compare(command) == 0 ){
			result = testStack.Pop();
			cout << "POP: "<< result << endl;
		}
			
	}
	
	
	
	//Stack stack;
	//stack.Print();
	
	
	
	testStack.stack.printList();
	return 0;

}