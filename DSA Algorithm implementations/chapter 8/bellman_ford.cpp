#include<bits/stdc++.h>;
using namespace std;
int main(){
    int v=5;
    vector<vector<int>> adj[v]={
                    {{0,1,14},{0,7,7}},
                    {{1,3,5},{1,2,-6}},
                   {{2,4,4},{2,5,-4}},
                {{3,5,8}},
                {{4,4,1}},

    };
    vector<int> vis(v,0);
   
    vector<int> dis(v,1e9);
     dis[0]=0;
    for(int i=0; i<v-1; i++){

        for(auto it: adj[i]){
            int u=it[0];
            int v=it[1];
            int d=it[2];
            if(dis[u]+d<dis[v]){
                dis[v]=dis[u]+d;
            }
        }
    }
   for(auto it : dis)
   cout<<it<<endl;

}