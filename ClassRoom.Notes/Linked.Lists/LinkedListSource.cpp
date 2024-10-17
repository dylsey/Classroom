#include <iostream>
#include <string>
#include <vector>

struct node
{
	int data = 5; // data
	node* next = nullptr; // pointer to next node
	node* tempNode = new node;
	tempNode->data = 4;
	tempNode->next = head->next->next;
	head->next = tempNode;
};
int main()
{
	
}