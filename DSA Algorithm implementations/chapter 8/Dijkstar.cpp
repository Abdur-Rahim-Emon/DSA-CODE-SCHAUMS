#include<bits/stdc++.h>
using namespace std;
int main(){
    //adj matrix 
    int v=5;
    vector<vector<int>> adj[v]=   {
                         {{10,1},{5,2}},
                         {{1,3},{2,2}},
                         {{2,4},{3,1},{9,3}},
                        {{4,4}},
                        {{7,0},{6,3}}
                             };
    set<pair<int,int>> st;
    // set the source 
    st.insert({0,0});// insert the source to zero
    vector<int> dis(v,1e9);
    //set source to 0
    dis[0]=0;
    while(!st.empty()){
        auto it=*(st.begin());
        int d=it.first;// get the source distance 
        int n=it.second;// get the node 
        st.erase(it);//erase the set which are visited
        for(auto it: adj[n]){
               int adjdis=it[0];//distance of adjacence node
               int adjnode=it[1];// node 
               if(d+adjdis<dis[adjnode]){//compare 
                             
                 
                    dis[adjnode]=d+adjdis;
                    st.insert({dis[adjnode],adjnode});//insert new into the set
                    
                
               }
        }
       
               }
    
               for(auto i : dis){
                cout<<i<<" ";
               }

    }

