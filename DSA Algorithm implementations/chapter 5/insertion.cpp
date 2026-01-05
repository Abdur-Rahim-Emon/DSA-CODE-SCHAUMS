#include<bits/stdc++.h>
using namespace std;
int size=100;
int info[100];
int link[100];
int avail=0;
int start=-1;
void initilization(){
       for(int i=0; i<size-1; i++){
        link[i]=i+1;

       }
       link[size-1]=-1;
}
void insert(int item,int x,int y){
  if(avail==-1)
  {
     cout<<" overflow "<<endl;
     return;
  }
 
    int temp=avail;// taking new memory for the data item
    avail=link[avail];// changing the avail location 
    info[temp]=item;// adding item to the info 
    // now the term is to change the memoory location of the data item
    link[temp]=y;// store the address of y 
    link[x]=temp;// taking the address of New data item

}
//whenever we wanna inseert item at the first 
void insertFirst(int item){
  if(avail==-1){
    cout<<"overflow "<<endl;
    return;
  }
  int temp=avail;
  avail=link[avail];//new location for the avail 
  info[temp]=item;
  link[temp]=start;// insert the new item link to the previous one
  // inserting at first so that change the start at 
  start=temp;

}
void print(){
  int ptr=start;
  while(ptr!=-1){
    cout<<info[ptr]<<"->";
    ptr=link[ptr];
  }
  cout<<"null ";//if find no item into the item
}
int found(int item){
  int ptr=start;
  int loc=-1;
  while(ptr!=-1){
    if(info[ptr]==item){
       loc=ptr;
       return  loc;
    }
    ptr=link[ptr];
  }
  return loc;
}
int main(){
         initilization();
         // inserting the data 
         insertFirst(22);
         insertFirst(15);
         insertFirst(11);
         print();
         cout<<endl<<"after inserting two item"<<endl;
         int x=found(11);
         int y=found(15);
         insert(16,x,y);
         print();

}