#ifndef STACK_H
#define STACK_H
#include "LList.h"

class Stack{
	private:
		int size;
	
	public:
		LList stack;	
		Stack();
		int GetSize();
		void Print();
		void Push(double data);
};		
#endif	
		/*
		Pop();
		*/


