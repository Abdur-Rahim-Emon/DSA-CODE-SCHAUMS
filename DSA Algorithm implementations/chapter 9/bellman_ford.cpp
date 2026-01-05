#include<bits/stdc++.h>;
using namespace std;
int main(){
    int v=10;
    vector<vector<int>> adj={
                     {1,2},
                     {3,4},{5,6},{7},{8},{9},{10},{},{},{}
    };
    
    vector<int>vis(v,0);
    vector<int> bfs;
    stack<int> q;
    q.push(0);
    vis[0]=1;
    while(!q.empty()){
        int n=q.top();
    bfs.push_back(n);
            q.pop();
            for(auto it: adj[n]){
               if(!vis[it]){
                     vis[it]=1;
                     q.push(it);
               }
            }
    }
    for(auto it: bfs)cout<<it<<" ";
}