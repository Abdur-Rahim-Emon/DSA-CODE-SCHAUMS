#include<bits/stdc++.h>
using namespace std;
void seive(int n){
    vector<bool> isprime(n+1,true);
    // making all the number true
    isprime[0]=isprime[1]=false;
    for(int p=2; p*p<=n; p++){
        if(isprime[p]){
            for(int i=p*p; i<=n; i+=p){
                isprime[i]=false;
            }
        }
    }
    for(int i=0; i<=n; i++){
        if(isprime[i]){
            cout<<i<<" ";
        }
    }

}
int main(){
    int n;
    cin>>n;
    seive(n);
}