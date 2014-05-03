#ifndef LLIST_H
#define LLIST_H

class LList{
	
	public:
		struct Node{
			double data;
			Node *next;
		};
		
		Node *head;
		int length;
		
		LList();
		int insertAtHead(double data);
		double removeHead();
		void printList();
		
	
};		
#endif