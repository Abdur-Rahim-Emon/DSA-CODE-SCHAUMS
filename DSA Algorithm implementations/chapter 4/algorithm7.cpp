//multiplication of an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[2][3] = {
    {1, 2, 3},
    {34, 5, 6}
};
int b[3][2]={
    {2,5},
    {5,2},
    {7,1}
};
int c[2][2];
int sum=0; 
  int row1=2,column1=3;
  int row2=3,column2=2;
  for(int i=0; i<row1; i++){
    for(int j=0; j<column2; j++){
        sum=0;
        for(int k=0; k<column1;k++){
             sum+=a[i][k]*b[k][j];
        }
        c[i][j]=sum;
        
    }
    
  }
  for(int i=0; i<row1; i++){
    for(int j=0; j<column2; j++){
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
  }
}