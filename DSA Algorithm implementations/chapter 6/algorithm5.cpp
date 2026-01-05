#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int low,int high){
   int ind=low-1;
   int pivot=arr[high];
   for(int j=low; j<high;j++){
    if(arr[j]<pivot){
        ind++;
        swap(arr[ind],arr[j]);
    }
   }
   swap(arr[ind+1],arr[high]);
   return ind+1;
}
void quickSort(vector<int> &arr,int low,int high){
    stack<pair<int,int>> s;
    s.push({low,high});
    while(!s.empty()){
        auto it=s.top();
        s.pop();
        int l=it.first;
        int h=it.second;
        if(l<h){
            int pos=partition(arr,l,h);
            if(h>pos)
            s.push({pos+1,h});//put the high low limit of the partition ;
            if(l<pos)
            s.push({l,pos-1});
        }
    }

}


int main() {
    vector<int> arr = {44, 30, 50, 22, 60, 55, 77, 57};
   quickSort(arr,0,arr.size()-1);
   for(auto it: arr){
    cout<<it<<" ";
   }
    return 0;
}
