#include <iostream>        // This is a key C++ library
#include "LList.h"

using namespace std;

//Default Constuctor
LList::LList()
{
	head = NULL;
	length = 0;
}



//Insert at Head of List
//returns -1 on failure, 0 on success
int LList::insertAtHead(double data)
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	//if malloc succeeded (newNode not NULL)
	if(newNode){
		newNode->data = data;
		newNode->next = head;
		head = newNode;
		length++;
		return 0;
	}
	else
		return -1;
}

//Remove Head of List
//DONT FORGET TO FREE NODE
double LList::removeHead()
{
	//check for removing a null
	double retVal;
	if(head){
		retVal = head->data;
		head = head->next;
		length--;
		return retVal;
	}
	else{
		return -1;
	}
}

//prints list from head to end
void LList::printList()
{
	Node *currentNode;
	currentNode = head;

	while(currentNode){
		cout<<currentNode->data<<endl;
		currentNode = currentNode->next;
	}	
}