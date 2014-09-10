/*
	Program to showcase adjacency list representation of a graph.
	Created By: Lokesh Chandra Basu
	Email:		lokesh.basu@gmail.com
*/


#include <iostream>

using namespace std;


struct Node
{
	int dest;
	Node *next;
};

struct AdjList
{
	Node *head;
};

struct Graph
{
	int V;
	AdjList *array;
};

Node *newAdjListNode(int dest)
{
	Node *newNode = new Node();
	newNode->dest = dest;
	newNode->next = NULL;
	return newNode;
}

Graph *createGraph(int V)
{
	Graph *graph = new Graph();
	graph->V = V;
	graph->array = new AdjList[V];

	int i;

	for (int i = 0; i < V; ++i)
	{
		graph->array[i].head = NULL;
	}

	return graph;
}

void addEdge(Graph *graph, int src, int dest)
{
	Node *newNode = newAdjListNode(dest);
	newNode->next = graph->array[src].head;
	graph->array[src].head = newNode;

	newNode = newAdjListNode(src);
	newNode->next = graph->array[dest].head;
	graph->array[dest].head = newNode;
}

void printGraph(Graph *graph)
{
	for (int i = 0; i < graph->V; ++i)
	{
		Node *crawPtr = graph->array[i].head;
		cout << "Adjacency list for the vertex " << i << " is: ";
		while(crawPtr)
		{
			cout << crawPtr->dest << " ";
			crawPtr = crawPtr->next;
		}
		cout << endl;

	}
}

int main()
{
	int V = 5;
	Graph *graph = createGraph(V);

	addEdge(graph, 0, 1);
	addEdge(graph, 0, 4);
	addEdge(graph, 1, 2);
	addEdge(graph, 1, 3);
	addEdge(graph, 1, 4);
	addEdge(graph, 2, 3);
	addEdge(graph, 3, 4);

	printGraph(graph);

	return 0;
}