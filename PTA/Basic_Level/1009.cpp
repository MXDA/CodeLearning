#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
    stack<string> st;
    string str;
    while(cin >> str) st.push(str);
    cout << st.top();
    st.pop();

    while(!st.empty()) {
        cout << " " << st.top();
        st.pop();
    }

    return 0;
}