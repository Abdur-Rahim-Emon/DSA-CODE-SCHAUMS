#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={1,2,21,3,6};
    int max=a[0];
    int loc=0;
    for(int i=1; i<5; i++){
        if(a[i]>max){
                loc=i+1;
                max=a[i];
        }
    }
    cout<<"max is ="<<max<<" postion is ="<<loc;

}