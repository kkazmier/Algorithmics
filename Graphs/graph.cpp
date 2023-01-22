#include <iostream>
#include <istream>
#include <fstream>
#include <cstdio>
#include <iomanip>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <stack>
#include <algorithm>
#include <iterator>
#include <math.h>
#include <queue>
#include <iomanip>
#include <string>
#include <climits>
#include <bits/stdc++.h>

using namespace std;

//ios_base::sync_with_stdio(0);

struct Graph {
	int vertex;
	set<int>* adjacencyList;
};

Graph* createGraph(int vertex) {
	Graph* graph = new Graph;
	graph -> vertex = vertex;
	graph -> adjacencyList = new set<int>[vertex];
	return graph;
}

void addEdge(Graph* graph, int start, int end) {
	graph -> adjacencyList[start].insert(end);
	graph -> adjacencyList[end].insert(start);
}

void printGraph(Graph* graph) {
	for (int i = 0; i < graph -> vertex; ++i) {
		set<int> lst = graph->adjacencyList[i];
		cout << endl << "Adjacency list of vertex "
			<< i << endl;
		for (auto itr = lst.begin(); itr != lst.end(); ++itr)
			cout << *itr << " ";
		cout << endl;
	}
}

void searchEdge(Graph* graph, int src, int dest) {
	auto itr = graph->adjacencyList[src].find(dest);
	if (itr == graph->adjacencyList[src].end())
		cout << endl << "Edge from " << src
			<< " to " << dest << " not found."
			<< endl;
	else
		cout << endl << "Edge from " << src
			<< " to " << dest << " found."
			<< endl;
}

int main() {
	// Create the graph given in the above figure
	int V = 5;
	struct Graph* graph = createGraph(V);
	addEdge(graph, 0, 1);
	addEdge(graph, 0, 4);
	addEdge(graph, 1, 2);
	addEdge(graph, 1, 3);
	addEdge(graph, 1, 4);
	addEdge(graph, 2, 3);
	addEdge(graph, 3, 4);

	// Print the adjacency list representation of
	// the above graph
	printGraph(graph);

	// Search the given edge in the graph
	searchEdge(graph, 2, 1);
	searchEdge(graph, 0, 3);

	return 0;
}
