#include<bits/stdc++.h>
using namespace std;
int main(){
    int v=11;
    vector<int> adj[v]={{},{2,3},
                          {4,5},
                        {6,7},
                     {8,9},
                      {10},
                    {},{},{},{},{}};
    stack<int> s;
    vector<int> vis(v,0);//to store the track of visited node
    //start node is 1
    s.push(1);
    vis[1]=1;
    vector<int> dfs;
    //repeat untill the stack is empty
    while(!s.empty()){
        int node=s.top();
        s.pop();
        dfs.push_back(node);
        //take the 
        for(auto node: adj[node]){
            if(!vis[node]){
                vis[node]=1;
                s.push(node);
            }
        }
    }
   for(auto i: dfs){
    cout<<i<<" ";
   }

}