//replacement of a string 
#include<bits/stdc++.h>
using namespace std;
int main(){
   string str="abarecaread";
   string p="are";
   string to="n";
   int k=str.find(p);
    while(k!=-1){
       str.replace(k,p.length(),to);
      k=str.find(p);
   }
  
cout<<str;
    
}