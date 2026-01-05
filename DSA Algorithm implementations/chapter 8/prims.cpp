#include<bits/stdc++.h>
using namespace std;
int main(){
    int v=5,sum=0;
    
    vector<vector<int>> adj[v]=   {
                         {{10,1},{5,2}},
                         {{1,3},{2,2}},
                         {{2,4},{3,1},{9,3}},
                        {{4,4}},
                        {{7,0},{6,3}}
                             };
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
  vector<int>vis(v,0);
  vector<int> parent(v,-1);
  vector<vector<int>> edges;
      pq.push({0,0});
 parent[0]=1;
 while(!pq.empty()){
    auto it=pq.top(); pq.pop();
    int d=it.first;
    int n=it.second;
   
    if(vis[n]==1)continue;
    vis[n]=1;
    sum+=d;
    if(parent[n]!=-1){
      edges.push_back({d,n});
    }
    for(auto it:adj[n]){
        int ad=it[0];
        int an=it[1];
        if(!vis[an]){
            pq.push({ad,an});
            parent[an]=n;
        }
    }
 }
   cout<<sum<<endl;
   for(auto it: edges){
    cout<<it[0]<<"-"<<it[1]<<endl;
   }
}