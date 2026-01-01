#include <iostream>
using namespace std;
#define V 4
void addEdge(int graph[][V], int u, int v, int isDirected, int weight)
{
    graph[u][v] = weight;
    if (!isDirected)
    {
        graph[v][u] = weight;
    }
}

void display(int mat[V][V])
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int graph[V][V] = {0};
    int isDirected = 0;
    addEdge(graph, 0, 2, isDirected, 2);
    addEdge(graph, 0, 3, isDirected, 5);
    addEdge(graph, 1, 2, isDirected, 8);
    addEdge(graph, 1, 3, isDirected, 1);
    display(graph);

    return 0;
}