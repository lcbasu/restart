/*
	Program to print DFS traversal from a given source vertex.
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
	void DFSHelper(int v, bool visited[]);
public:
	Graph(int V);
	void addEdge(int u, int v);
	void DFS(int src);
};

Graph::Graph(int V)
{
	this->V = V;
	adjList = new list<int>[V];
}

void Graph::addEdge(int u, int v)
{
	adjList[u].push_back(v);
}

void Graph::DFS(int src)
{
	bool *visited = new bool[V];

	for (int i = 0; i < V; ++i)
	{
		visited[i] = false;
	}

	DFSHelper(src, visited);
}

void Graph::DFSHelper(int v, bool visited[])
{
	visited[v] = true;
	cout << v << " ";

	list<int>::iterator it;
	for(it = adjList[v].begin(); it != adjList[v].end(); it++)
	{
		if(!visited[*it])
			DFSHelper(*it, visited);
	}	
}

int main()
{
	Graph graph(4);

	graph.addEdge(0, 1);
	graph.addEdge(0, 2);
	graph.addEdge(1, 2);
	graph.addEdge(2, 0);
	graph.addEdge(2, 3);
	graph.addEdge(3, 3);

	graph.DFS(2);

	return 0;
}