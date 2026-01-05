//insertion in an array 
#include<bits/stdc++.h>
using namespace std;
int Max=10;
int n=0;
void insertion (int arr[],int &n,int k,int item){
        int j=n;
        if(k<0 || k>n ){
            cout<<"array overflow";
            return ;
        }
        while(j>=(k-1)){//use for shifting right all the element 
            arr[j+1]=arr[j];
            j--;
        }
        arr[k-1]=item;
        n++;
        
}
void display(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
        cout<<endl;
}
int main(){
 int arr[Max]={1,2,3,4,5};
 int n=0;//number of element in an array;
 for(int i: arr){
    if(i!=0)
    n++;
 }
 display(arr,n);
 
 //insertin at postion 3
 insertion (arr,n,3,111);
 display(arr,n);
 
}