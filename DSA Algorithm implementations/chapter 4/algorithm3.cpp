//deletion in an array
#include<bits/stdc++.h>
using namespace std;
int Max=10;
int n=0;
void deletion(int arr[],int &n,int k){
    
    int j=n;
    k-=1;
    if(k<0){//checking underflow the array
        cout<<"underflow ";
        return;
    }
    while(j>=(k)){//shifting the element in left
        arr[k]=arr[k+1];
        k++;
    }
    n--;
    

}
void display(int arr[],int n){
    
   
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[Max]={1,2,3,4,5};
  
     for(int i : arr){//counting number of elements in the array
        if(i!=0){
            n++;
        }
    }
      display(arr,n);
      deletion(arr,n,3);
      display(arr,n);
}