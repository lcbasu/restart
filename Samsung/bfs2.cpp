// using adjacency matrix

#include <iostream>
#include <queue>
#include <list>

using namespace std;

#define MAX 100

int adj_mat[MAX][MAX];
int max_index;


void add_edge(int u, int v)
{
	adj_mat[u][v] = 1;

	if (u > max_index)
	{
		max_index = u;
	}
	if (v > max_index)
	{
		max_index = v;
	}
}

void BFS(int src)
{
	bool *visited = new bool[MAX];
	for (int i = 0; i < MAX; i++)
	{
		visited[i] = false;
	}
	queue<int> que;
	visited[src] = true;
	que.push(src);
	while(!que.empty())
	{
		src = que.front();
		cout << src << " ";
		que.pop();

		for (int i = 0; i <= max_index; ++i)
		{
			if ((adj_mat[src][i] == 1) && (visited[i] == false))
			{
				visited[i] = true;
				que.push(i);
			}
		}
	}
}

int main()
{
	max_index = 0;

	for (int i = 0; i < MAX; i++)
	{
		for(int j = 0; j < MAX; j++)
		{
			adj_mat[i][j] = 0;
		}
	}

	add_edge(0, 1);
	add_edge(0, 2);
	add_edge(1, 2);
	add_edge(2, 0);
	add_edge(2, 3);
	add_edge(3, 3);
	BFS(2);
	cout << endl;
	return 0;
}