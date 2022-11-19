#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<pair <int, int>> adj[],int u,int v, int weight){
    adj[u].push_back(make_pair(v, weight));

    // Jika undirected, maka dipush ke 2 2 nya

    // adj[v].push_back(make_pair(u, weight));
}

void printGraph(vector<pair <int, int>> adj[],int V){
    // Loop sebanyak jumlah vertex
    for (int v = 0; v < V; v++){
        cout << "\n Adjacency list of vertex "
            << v << "\n head";

        for (int i = 0; i < adj[v].size(); i++){
            // Karena pakai <pair <int, int>>, jadi untuk ngeprint bisa menggunakan .first dan .second
            cout<<" --> "<< adj[v][i].first << " " << adj[v][i].second;
        }

        printf("\n");
    }
}

int main(){
    // Jumlah Vertex
    int V = 5;

    vector<pair <int, int>> adj[V];
    addEdge(adj, 0, 1, 2);
    addEdge(adj, 0, 4, 3);
    addEdge(adj, 1, 3, 4);
    addEdge(adj, 2, 4, 2);
    addEdge(adj, 1, 2, 3);

    printGraph(adj, V);

    return 0;
}