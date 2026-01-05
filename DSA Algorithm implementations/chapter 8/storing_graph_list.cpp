#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,e;
    cin>>v>>e;
    vector<int> arr[v+1];
    for(int i=0; i<e; i++){
        int u,v;
        cin>>u>>v;
        arr[u].push_back(v);
        //arr[v].push_back(u);
    }
    //for printing 
    for(int i=1; i<v+1; i++){
        cout<<i<<": ";
        for(int i: arr[i]){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}