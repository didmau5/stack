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
		//Node removeHead();
		int insertAtHead(double data);
		void printList();
		
	
};		
#endif