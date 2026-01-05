#include<bits/stdc++.h>
using namespace std;
int Div(int k,int n){
return n%k==0?0:1;
}
int prime(int n){
    if(n>10){
        cout<<"the number is greater than 10 "<<endl;
    }
    else{
        cout<<"the number is less than 10";
        return 0;
    }
    if(n%2==0){
        cout<<"the number is even "<<endl;
        return 0;
    }
    else{
        for(int i=3; i<n;i=i+2){
            if(Div(i,n)==0){
                cout<<"the number is multple of odd number "<<endl;
                  return 0;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    prime(n);

}