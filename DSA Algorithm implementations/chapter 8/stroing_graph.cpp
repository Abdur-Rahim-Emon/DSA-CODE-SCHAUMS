#include <bits/stdc++.h>
using namespace std;

int main() { 
    int m, n;
    cin >> n >> m; // m = edge সংখ্যা, n = node সংখ্যা

    int arr[n+1][n+1] = {0}; // 10x10 ম্যাট্রিক্স

    for(int i = 0; i <m; i++){
        int u, v;
        cin >> u >> v;
        arr[u][v] = 1;
        arr[v][u] = 1; // Undirected গ্রাফ
    }

    // n x n ম্যাট্রিক্স প্রিন্ট
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < n+1; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
