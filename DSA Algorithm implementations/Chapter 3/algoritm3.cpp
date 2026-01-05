//Pattern matching algorithm 
#include<bits/stdc++.h>
using namespace std;
int main(){
   string str="abarearead";
   string p="are";
    int k=0;
    int max=str.length()-p.length()+1;
    int index=-1;
   while(k<=max){
      for(int i=0; i<p.length(); i++  ){
         if(str[k+i]!=p[i]){
            break;
         }
         if(i==p.length()-1)
         {
          
            index=k;
            k=max;
         }
      }
      k++;
   }
     
  
cout<<index;
    
}
