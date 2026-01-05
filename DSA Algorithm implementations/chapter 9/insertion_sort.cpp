#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> arr={5,2,3,1,4};
   int size=arr.size();
    for(int i=1; i<size; i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
        }
      arr[j+1]=temp;
    }
    for(auto it: arr)
    cout<<it<<" ";
}