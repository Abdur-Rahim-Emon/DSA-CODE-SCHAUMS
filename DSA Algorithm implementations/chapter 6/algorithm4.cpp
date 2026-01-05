#include<bits/stdc++.h>
using namespace std;
int precedence(char ch){
    if(ch=='^'){
        return 3;

    }
    if(ch=='+'||ch=='-'){
        return 1;
    }
    if(ch=='/'||ch=='*'){
        return 2;
    }
    return 0;
}
string postfix(string s){
    stack<char> st;
    string result="";
    for(char ch: s){
        if(ch==' ')//FOR SPACE IGNORING 
        continue;
        if(ch=='('){//IF LEFT PARENTHESIS IS FIND 
            st.push(ch);
        }
        else if(isalnum(ch)){//IF FIND ANY CHARACTER 
            result+=ch;
        }
        else if(ch==')'){//check whether the right parenthesis is found or not
            while(!st.empty()  && st.top()!='('){
                result+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{//checking the it is operator or opereand then put it to the stack according to precedence 
          
        
            while( !st.empty() && (precedence(ch)<=precedence(st.top()))){
                result+=st.top();
                st.pop();
            }
            st.push(ch);
        }
         
    }
    while(!st.empty()){// cheking if there is nothing in the stack 
        result+=st.top();
        st.pop();
    }
    return result;
}
int main(){
    cout<<"enter the vlaue of infix : ";
    string s;
    getline(cin,s);
   cout<< postfix(s);
 
}