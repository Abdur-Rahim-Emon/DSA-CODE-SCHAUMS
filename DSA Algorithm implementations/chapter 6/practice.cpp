#include<bits/stdc++.h>
using namespace std;
int p(vector<int> &arr,int low,int high){
        int pivot=arr[high];
        int i=low-1;
        for(int j=low; j<high; j++){
          if(arr[j]<pivot){
             i++;
             swap(arr[i],arr[j]);
          }
         
        }
        swap(arr[i+1],arr[high]);
        return i+1;
        
}
void quicksort(vector<int> & v,int low,int high){
  stack<pair<int,int>> st;
  st.push({low,high});

    while(!st.empty()){
      auto it=st.top();
      st.pop();
      int l=it.first;
      int h=it.second;
      if(l<h){
      int pos=p(v,l,h);
      if(pos<high)
      st.push({pos+1,h});//for right
      if(pos>l){
        st.push({l,pos-1});//for left
      }

    }
  
  }
}

int main(){
     vector<int> arr = {44, 30, 50, 22, 60, 55, 77, 57};
   quicksort(arr,0,arr.size()-1);
   for(auto it: arr){
    cout<<it<<" ";
   }
}