#include<bits/stdc++.h>
using namespace std;
const int n=5;
int arr[n]={1,2,3,4,5};
    int front=0,rear=4;
    int item;
void Qdeletion(int arr[],int &item,int &front,int &rear){
    if(front==-1){
        cout<<"underflow "<<endl;
        item=-3242424;
        return;
    }
     item=arr[front];
    
    if(front==rear){//for the first element 
        front=-1;rear=-1;
    }
   else if(front==(n-1)){//for the last element;
        front=0;
    }
    else{
        front++;
    }
     


}
void display() {
    if(front==-1){
      cout<<"empty";
      return;
    }
    cout << "Deque contents: ";
    int i = front;
    while (true) {
        cout << arr[i] << " ";
        if (i == rear) break;
        i = (i + 1) % n;
    }
    cout << endl;
}
int main(){
    
    Qdeletion(arr,item,front,rear);
    cout<<"item "<<item<<endl;
      Qdeletion(arr,item,front,rear);
    cout<<"item "<<item<<endl;

      Qdeletion(arr,item,front,rear);
    cout<<"item "<<item<<endl;

      Qdeletion(arr,item,front,rear);
    cout<<"item "<<item<<endl;

      Qdeletion(arr,item,front,rear);
    cout<<"item "<<item<<endl;

      Qdeletion(arr,item,front,rear);
    cout<<"item "<<item<<endl;
    display();

           
}