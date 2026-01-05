#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,5,9,10};
    int item=9;
    int loc=1;
    int i=0;
    while(i<5){
        if(arr[i]==item){
            loc=i+1;
            break;
        }
        i++;
    }
    cout<<"finding position is "<<loc;

}