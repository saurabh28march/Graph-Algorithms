#include <bits/stdc++.h> 


const int V = 1000;
void floydWarshall (int graph[][V]) 
{
	int dist[V][V], i, j, k; 

	for (i = 0; i < V; i++) 
		for (j = 0; j < V; j++) 
			dist[i][j] = graph[i][j]; 
	for (k = 0; k < V; k++) 
		for (i = 0; i < V; i++) 
			for (j = 0; j < V; j++) 
				if (dist[i][k] + dist[k][j] < dist[i][j]) 
					dist[i][j] = dist[i][k] + dist[k][j]; 
} 


int main() 
{
	//Call floydWarshall(graph); 
    //where graph is adjacency matrix
	return 0; 
} 
