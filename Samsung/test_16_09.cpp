/*
	Program to print the height of the tree.
	Created By: Lokesh Chandra Basu
	Email:		lokesh.basu@gmail.com
*/

#include <iostream>
#include <algorithm>

using namespace std;

struct Node
{
	int key;
	Node *left;
	Node *right;	
};

Node *newNode(int key)
{
	Node *newN = new Node();
	
	newN->key = key;
	newN->left = NULL;
	newN->right = NULL;

	return newN;
}

int height(Node *root)
{
	if(root)
	{
		return (max(1, max(1 + height(root->left), 1+ height(root->right))));
	}
	else
		return 0;
}

int main()
{
	Node *root = newNode(8);
	root->left = newNode(4);
	root->left->right = newNode(6);
	root->right = newNode(10);

	cout << "Height: " << height(root) << endl;

	return 0;
}