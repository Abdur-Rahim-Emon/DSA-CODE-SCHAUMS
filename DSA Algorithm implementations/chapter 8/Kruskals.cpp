#include<bits/stdc++.h>
using namespace std;

// Edge structure with source, destination, and weight
struct Edge {
    int u, v, weight;
    bool operator<(Edge const& other) {
        return weight < other.weight; // Sort by weight (ascending)
    }
};

// Disjoint Set Union (DSU)
int find(int u, vector<int>& parent) {
    if (parent[u] != u)
        parent[u] = find(parent[u], parent); // Path compression
    return parent[u];
}

void unionSets(int u, int v, vector<int>& parent, vector<int>& rank) {
    u = find(u, parent);
    v = find(v, parent);
    if (u != v) {
        if (rank[u] < rank[v])
            swap(u, v);
        parent[v] = u;
        if (rank[u] == rank[v])
            rank[u]++;
    }
}

int main() {
    int V = 4; // Number of vertices
    vector<Edge> edges = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    // Step 1: Sort edges by weight
    sort(edges.begin(), edges.end());

    // Step 2: Initialize DSU
    vector<int> parent(V), rank(V, 0);
    for (int i = 0; i < V; ++i)
        parent[i] = i;

    vector<Edge> mst; // Store the MST edges
    int totalWeight = 0;

    // Step 3: Process edges
    for (Edge e : edges) {
        if (find(e.u, parent) != find(e.v, parent)) {
            mst.push_back(e);
            totalWeight += e.weight;
            unionSets(e.u, e.v, parent, rank);
        }
    }

    // Step 4: Output the result
    cout << "Edges in the Minimum Spanning Tree:\n";
    for (Edge e : mst)
        cout << e.u << " -- " << e.v << " == " << e.weight << "\n";

    cout << "Total weight of MST: " << totalWeight << endl;

    return 0;
}
