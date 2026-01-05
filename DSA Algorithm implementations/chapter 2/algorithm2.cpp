#include<bits/stdc++.h>
using namespace std ;
int main(){
    double a,b,c,x1,x2;
    cin>>a;
    cin>>b;
    cin>>c;
   double  d=b*b-4*a*c;
   if(d>0){
     x1=(-b+sqrt(d))/2*a;
     x2=(-b-sqrt(d))/2*a;
     cout<<"x1 "<<x1<<" x2 "<<x2;

   }

   else if(d==0){
      x1=-b/2*a;
      cout<<"x "<<x1;
   }
   else{
    cout<<"there is no solution ";
   }
   

}