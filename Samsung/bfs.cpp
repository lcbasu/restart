// using adjacency lists

#include <iostream>
#include <list>

using namespace std;

class Graph
{
	int V;	// total number of vertices
	list<int> *adj;
public:
	Graph(int V);
	void add_edge(int u, int v);
	void BFS(int src);

};

// create a graph with V vertices
Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::add_edge(int u, int v)
{
	adj[u].push_back(v);
}

void Graph::BFS(int src)
{
	bool *visited = new bool[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i] = false;
	}

	list<int> que;

	visited[src] = true;

	que.push_back(src);

	list<int>::iterator it;

	while(!que.empty())
	{
		src = que.front();
		cout << src << " ";
		que.pop_front();

		for(it = adj[src].begin(); it != adj[src].end(); it++)
		{
			if (!visited[*it])
			{
				visited[*it] = true;
				que.push_back(*it);
			}
		}
	}
}

int main()
{
	Graph grph(4);
	grph.add_edge(0, 1);
    grph.add_edge(0, 2);
    grph.add_edge(1, 2);
    grph.add_edge(2, 0);
    grph.add_edge(2, 3);
    grph.add_edge(3, 3);

    cout << "Following is Breadth First Traversal (starting from vertex 2) \n";

    grph.BFS(2);

	return 0;
}