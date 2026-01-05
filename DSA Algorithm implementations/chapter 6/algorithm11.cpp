#include<bits/stdc++.h>
using namespace std;
const int n=5;

 int front=-1;
    int rear=-1;
    int arr[n];
void Qinsertion(int arr[],int item,int &front,int &rear){
    if( (front==0 && rear==n-1) || front==rear+1){
        cout<<endl<<"overflow"<<endl;
        item=-23434;
        return;
    }
    if(front==-1){
        rear=front=0;
    }
    else if(rear == (n-1))//for circular queue 
    rear=0;
    else 
    rear++;
    arr[rear]=item;
    cout<<front<<" "<<rear<<" "<<item<<endl;
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
   
 
   
    int item=20;
    Qinsertion(arr,20,front,rear);
    Qinsertion(arr,50,front,rear);
    Qinsertion(arr,40,front,rear);
    Qinsertion(arr,60,front,rear);
    Qinsertion(arr,70,front,rear);
    Qinsertion(arr,80,front,rear);
  cout<<endl<<"fornt "<<front<<" rear "<<rear<<endl;
  display();

}