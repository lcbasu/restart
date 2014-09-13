/*
	Program to print BFS traversal from a given source vertex.
	Created By: Lokesh Chandra Basu
	Email:		lokesh.basu@gmail.com
*/

#include <iostream>
#include <list>
#include <queue>

using namespace std;

class Graph
{
	list<int> *adjList;
	int V;
public:
	Graph(int V);
	void addEdge(int u, int v);
	void BFS(int s);
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

void Graph::BFS(int src)
{
	bool *visited = new bool[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i] = false;
	}

	queue<int> que;

	visited[src] = true;
	que.push(src);

	list<int>::iterator it;

	while(!que.empty())
	{
		src = que.front();
		cout << src << " ";
		que.pop();

		for(it = adjList[src].begin(); it != adjList[src].end(); it++)
		{
			if(!visited[*it])
			{
				visited[*it] = true;
				que.push(*it);
			}
		}
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

	graph.BFS(2);

	return 0;
}