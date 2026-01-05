#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int start,int end,int mid){
    int i=start;
    int j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=end){
         if(arr[i]<=arr[j]){
         temp.push_back(arr[i]);
         i++;
         }
         else
         {
            temp.push_back(arr[j]);
            j++;
         }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    // copy to the orginal array
    for(int i=0; i<temp.size(); i++){
        arr[i+start]=temp[i];
    }

}
void mergeSort(vector<int> &arr,int start,int end){
    int mid=  start+(end-start)/2;
    if(start<end){
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,end,mid);

    }
}
int main(){
    vector<int> arr={44,30,50,22,60,55,77,57};
    mergeSort(arr,0,7);
    for(auto i: arr){
        cout<<i<<" ";
    }

}