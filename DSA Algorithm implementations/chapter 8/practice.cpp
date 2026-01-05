#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "5 6 2 + * 12 4 / -";
    stack<int> st;
    string temp;

    for (int i = 0; i <= s.length(); i++) {
        if (i < s.length() && s[i] != ' ') {
            temp += s[i];  // Build the number or operator
        } else {
            if (temp == "+" || temp == "-" || temp == "*" || temp == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                if (temp == "+") st.push(a + b);
                else if (temp == "-") st.push(a - b);
                else if (temp == "*") st.push(a * b);
                else if (temp == "/") st.push(a / b);
            } else if (!temp.empty()) {
                st.push(stoi(temp));  // Convert number string to int
            }
            temp.clear();  // Reset for next token
        }
    }

    cout << "Result: " << st.top() << endl;
    return 0;
}
