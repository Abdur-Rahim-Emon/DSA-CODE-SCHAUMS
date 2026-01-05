
#include <bits/stdc++.h>
using namespace std;

int size = 100;
int info[100];
int link[100];
int avail = 0;
int start = -1;

void init() {
    for (int i = 0; i < size; i++) {
        link[i] = i + 1;
    }
    link[size - 1] = -1; // End of AVAIL list
}

void insertFirst(int item) {
    if (avail == -1) {
        cout << "Underflow\n";
        return;
    }
    int temp = avail;
    avail = link[avail];
    info[temp] = item;
    link[temp] = start;
    start = temp;
}



void D(int item) {
    int  locp=-1;
    int loc=start;//used for the location for target node
    while(loc!=-1 && info[loc]!=item){//using these condition we foud the the node after tagegeted
        locp=loc;
        loc=link[loc];
    }
    if(loc==-1){
        cout<<"data not found";
        return;
    }
    if(locp==-1)
    start=link[locp];//if the target node is 1st
    else
    link[locp]=link[loc];// link to the next one

    link[loc]=avail;//update avail list
    avail=loc;
}
void print() {
    int ptr = start;
    while (ptr != -1) {
        cout << info[ptr] << " ";
        ptr = link[ptr];
    }
    cout << "null\n";
}

int main(){
   init();
  insertFirst(11);
   insertFirst(10);
  insertFirst(9);
   insertFirst(8);
   print();
   //cout<<start;
   D(10);
   print();
}