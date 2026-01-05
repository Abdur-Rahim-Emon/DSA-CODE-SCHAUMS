#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={9,13,1,11,12};
    for(int i=0; i<5; i++){
        int min=i;
        for(int j=i+1; j<5; j++){
            if(arr[j]<arr[min])
            {
               min=j;
            }
            
            
        }
        if(min!=i){
                int temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
    }
    for(auto it: arr)
    cout<<it<<" ";
}