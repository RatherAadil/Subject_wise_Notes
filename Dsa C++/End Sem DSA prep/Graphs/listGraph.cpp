#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;
class Graph
{
    int V;
    list<int> *l; // int *arr
public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V]; // arr=new int[V];
    }
    void addEdge(int u, int v)
    {
        // undirected
        l[u].push_back(v);
        l[v].push_back(u);
    }
    // void printAdjList()
    // {
    //     for (int i = 0; i < V; i++)
    //     {
    //         cout << i << " :";
    //         for (int neighbour : l[i])
    //         {
    //             cout << neighbour << " ";
    //         }
    //         cout << endl;
    //         {
    //         }
    //     }
    // }

    void BFS(int source)
    {
        queue<int> Q;
        vector<bool> vis(V, false);
        Q.push(source);
        vis[0] = true;
        while (Q.size() > 0)
        {
            int src = Q.front();
            Q.pop();
            cout << src << " ";
            for (int des : l[src])
            {
                if (!vis[des])
                {
                    vis[des] = true;
                    Q.push(des);
                }
            }
        }
        cout << endl;
    }
    void DFS(int source, vector<bool> &vis)
    {
        vis[source] = true;
        cout << source << " ";
        for (int neighbor : l[source])
        {
            if (!vis[neighbor])
            {
                DFS(neighbor, vis);
            }
        }
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    // g.addEdge(2, 3);
    g.addEdge(2, 4);
    cout << "BFS: ";
    g.BFS(0);
    cout << endl;

    vector<bool> vis(5, false);
    cout << "DFS: ";
    g.DFS(0, vis);
    cout << endl;
    // g.printAdjList();

    return 0;
}