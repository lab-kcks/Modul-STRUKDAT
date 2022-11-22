// Source Code : https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/
// A C++ program for Prim's Minimum
// Spanning Tree (MST) algorithm. The program is
// for adjacency matrix representation of the graph
#include <bits/stdc++.h>
using namespace std;

// Jumlah node
#define V 5

// Fungsi untuk me-return node yang memiliki minimum key value
// Dan belum masuk kedalam MST
int minKey(int key[], bool mstSet[])
{
    // Initialize min value
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}

void printMST(int parent[], int graph[V][V])
{
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " \t"
             << graph[i][parent[i]] << " \n";
}

void primMST(int graph[V][V])
{
    // Array untuk menyimpan MST
    int parent[V];

    // Array untuk menyimpan nilai key dari tiap edge dari node yang terhubung dengan node di MST
    int key[V];

    // Array tanda untuk node yang belum/sudah terhubung dengan MST
    bool mstSet[V];

    // Inisialisasi key dan mstSet
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;

    // Mulai dari node ke-0
    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minKey(key, mstSet);

        // Tandai node yang dipilih
        mstSet[u] = true;

        for (int v = 0; v < V; v++)

            // Cek jika
            // node `u` dan `v` memiliki weight (tersambung)
            // node tersebut belum masuk ke MST
            // weight edge lebih kecil dari key node-nya
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    printMST(parent, graph);
}

int main()
{

    int graph[V][V] = {{0, 2, 0, 6, 0},
                       {2, 0, 3, 8, 5},
                       {0, 3, 0, 0, 7},
                       {6, 8, 0, 0, 9},
                       {0, 5, 7, 9, 0}};

    primMST(graph);
    return 0;
}