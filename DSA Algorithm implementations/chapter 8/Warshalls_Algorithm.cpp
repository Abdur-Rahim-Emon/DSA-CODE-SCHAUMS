#include<bits/stdc++.h>
using namespace std;
int main(){
      // Delete second element in first row
   // v[0].erase(v[0].begin() + 1);
    int v=4;
    int inf=1e9;
    vector<vector<int>> adj={{7,5,inf,inf},
                     {7,inf,inf,2},
                    {inf,3,inf,inf},
                {4,inf,1,inf}};
                vector<vector<int>> ad=adj;

    for(int k=0; k<v; k++){
        for(int i=0; i<v; i++){
            for(int j=0; j<v; j++){
                if(ad[i][j]>(ad[i][k]+ad[k][j])){
                    ad[i][j]=ad[i][k]+ad[k][j];
                }
            }
        }
    }
    for(int i=0; i<v; i++){
        for(int j=0; j<v; j++){
            cout<<ad[i][j]<<" ";
        }
        cout<<endl;
    }
   
}