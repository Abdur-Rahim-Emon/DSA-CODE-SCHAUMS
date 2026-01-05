//Deletion of a string
#include<bits/stdc++.h>
using namespace std;
int main(){
   string str="abarearead";
   string p="are";
   int k=str.find(p);
    while(k!=-1){
      str.erase(k,p.length());
      k=str.find(p);
   }
  
cout<<str;
    
}