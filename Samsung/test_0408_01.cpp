/* 

Write a GetNth() function that takes a linked list and an integer index and returns the data value stored in the node at that index position.

*/

#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node *next;
};

void push(Node **headRef, int newData)
{
	Node *newNode = new Node();

	newNode->data = newData;
	newNode->next = *headRef;

	*headRef = newNode;
}

int getNth(Node *head, int index)
{
	Node *curr = head;

	int count = 0;

	while(curr != NULL)
	{
		if (count == index)
		{
			return curr->data;
		}
		count++;
		curr = curr->next;
	}
	cout << "Index out of bound." << endl;
	return -1;
}

int main()
{
	Node *head = NULL;

	push(&head, 3);
	push(&head, 2);
	push(&head, 1);	


	cout << "At index 0 value is: " << getNth(head, 0) << endl;
	cout << "At index 1 value is: " << getNth(head, 1) << endl;
	cout << "At index 2 value is: " << getNth(head, 2) << endl;

	return 0;
}











