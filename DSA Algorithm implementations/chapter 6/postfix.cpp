#include<bits/stdc++.h>
using namespace std;
int precedence(char c){
    if(c=='+' || c=='-'){
        return 1;
    }
   
    if(c=='*' || c=='/')
    return 2;
    
    if(c=='^')
    return 3;
    return 0;
}
int main(){
    string s="A+(B*C-(D/E^F)*G)*H)";
   stack<char> st;
  
   string rs="";
    for(char it: s){
        if(isalnum(it))
        rs+=it;
        else if(it=='(')
        st.push(it);
        else if(it==')'){
            while(!st.empty() && st.top()!='('){
                rs+=st.top();
                st.pop();
            }
            if(!st.empty())
            st.pop();
        }
        else{
            while(!st.empty() && precedence(it)<=precedence(st.top())){
                rs+=st.top();
                st.pop();
            }
            st.push(it);
        }
    }
   
    
 while(!st.empty()){
        rs+=st.top();
        st.pop();
 }
    cout<<rs;
}