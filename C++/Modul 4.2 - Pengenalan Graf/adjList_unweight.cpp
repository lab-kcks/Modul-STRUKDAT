#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);

    // Jika undirected, maka dipush ke 2 2 nya

    // adj[v].push_back(u)
}

void printGraph(vector<int> adj[],int V){
    // Loop sebanyak jumlah vertex
    for (int v = 0; v < V; v++){
        cout << "\n Adjacency list of vertex "
            << v << "\n head";

        for (int i = 0; i < adj[v].size(); i++){
            cout<<" --> "<<adj[v][i];
        }

        printf("\n");
    }
}

int main(){
    // Jumlah Vertex
    int V = 5;

    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 1, 2);

    printGraph(adj, V);

    return 0;
}