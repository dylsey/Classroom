#include <iostream>
#include <string>
#include <vector>

struct Node
{
	int data;
	Node* next;

};


int main()
{

	//Consider the singly linked list of ints represented by the following diagram:

	//head -> 5 -> 3 -> 7 -> 12 -> 10 -> nullptr

	//	Fill in the boxes below for what the list would look like after the following lines of code are executed :
	// Node * prevNode = head; while (prevNode->next->next != nullptr) { prevNode = prevNode->next; }  prevNode->next->next = head;  head = prevNode->next;  prevNode->next = nullptr;


	Node* head;
	head = new Node; 
	head->next = 0; 
	head->data = 5;

	Node* prevNode = head; 
	while (prevNode->next->next != nullptr) 
	{
		prevNode = prevNode->next;
	}  
	prevNode->next->next = head;
	head = prevNode->next;
	prevNode->next = nullptr;
}