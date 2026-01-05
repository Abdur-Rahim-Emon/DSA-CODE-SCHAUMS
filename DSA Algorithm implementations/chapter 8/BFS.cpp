#include<bits/stdc++.h>
using namespace std;
int main(){
    //list for adjacency 
    int v=11;
    vector<int> adj[v]={{},{2,3},
                        {4,5},
                    {6,7},
                        {8},
                    {9},{10},{},{},{},{}};
    queue<int> q;
    q.push(1);//put the first node to the queque
     vector<int> vis(v,0);
     vis[1]=1;//mark the first node visited 
    vector<int> bfs;//store the visited node
    while(!q.empty()){
        int node =q.front();
        q.pop();
        bfs.push_back(node);// put the node which are visited
        for(auto i: adj[node]){
            if(!vis[i]){
                vis[i]=1;
               q.push(i);           
            }
           
        }
        
    }
   for(auto i:bfs){
    cout<<i<<" ";
   }

}