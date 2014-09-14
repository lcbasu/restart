/*
	Program to construct a subset with of critical vertex.
	Created By: Lokesh Chandra Basu
	Email:		lokesh.basu@gmail.com
*/

#include <iostream>
#include <stack>
#include <list>

using namespace std;

class Graph
{
	int V;
	list<int> *adjList;
public:
	Graph(int V);
	void addEdge(int u, int v);
};

int main()
{
	return 0;
}