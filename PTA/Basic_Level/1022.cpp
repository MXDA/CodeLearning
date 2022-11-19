#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
		cin >> a >> b >> d;
	c = a + b;
	//cout << c << endl;
	if(c == 0) {
		cout << "0" << endl;
		return 0;
	}
	stack<int> st;
	while(c) {
		st.push(c % d);
		c /= d;
	}
	while(!st.empty()) {
		cout << st.top();
		st.pop();
	}
	return 0;
}
