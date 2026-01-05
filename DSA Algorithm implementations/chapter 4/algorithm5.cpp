//linear search
#include<bits/stdc++.h>
using namespace std;
void linearSearch(int arr[],int n,int item){
    for(int i=0; i<n; i++){
        if(item==arr[i]){
            cout<<"item found at position "<<i+1;
            break;
        }
    }
   
}
int main(){
    int arr[]={1,2,5,-9,20,3};
    int item=-9;
    int n=sizeof(arr)/sizeof(arr[0]);
    linearSearch(arr,n,item);
    
}