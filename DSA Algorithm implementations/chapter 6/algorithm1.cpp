#include<bits/stdc++.h>
using namespace std;
int s[10];
int t=-1;

void push(int n){
    int length=sizeof(s)/sizeof(s[0])-1;
      if(t>=length){
         cout<<"stack overflow";
      }
      else {
     s[++t]=n;

      }
}
void showTop(){
    cout<<s[t];
}
void display(){
    for(int i:s){
        cout<<i<<" ";
    }
}
void pop(){
    if(t!=-1){
        t--;
    }
    else{
        cout<<"stack underflow"<<endl;
    }
}
int main(){
   // int stack[10];
    int x;
    for(int i=0; i<10; i++){
         cin>>x;
         push(x);

    }
    showTop();
    cout<<endl;
    display();
    cout<<endl;
    pop();
    cout<<endl;
    display();
}