#include<bits/stdc++.h>
using namespace std;

void stackHanoi(int N,char A,char B,char C){
         stack<tuple<int,char,char,char>> s;
        s.push({N,A,B,C});
        while(!s.empty()){
            auto[n,f,a,t]=s.top();
            s.pop();
            if(n==1)
                cout<<"A  to "<<"C"<<endl;
                else{
                    s.push({n-1,a,f,t});
                    cout<<"A to "<<"c"<<endl;
                    s.push({n-1,f,t,a});
                }
            }

        }


int main() {
    int n = 3;
    stackHanoi(n, 'A', 'B', 'C');
    return 0;
}