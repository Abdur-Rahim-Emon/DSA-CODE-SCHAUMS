#include<bits/stdc++.h>
using namespace std;
int evaluationPostfix(vector<string> test){
    stack<int> s;
    for(string c: test){
        if(isdigit(c[0]))
        s.push(stoi(c));
       
        else{
            int op2=s.top();
            s.pop();
            int op1=s.top();
           s.pop();
           if(c=="+")
           s.push(op1+op2);
           else if(c=="-")
           s.push(op1-op2);
           else if(c=="*")
           s.push(op1*op2);
           else if(c=="/")
           s.push(op1/op2);

           }

        
    }
   return s.top();
}
int main(){
           vector<string> st={"5","6","2","+","*","12","4","/","-"};
    cout<<evaluationPostfix(st);
}
