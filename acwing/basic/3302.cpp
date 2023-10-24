#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <unordered_map>
using namespace std;
stack<int> num;
stack<char> op;
unordered_map<char, int> pr;

void eval() {
	int x;
	int b = num.top(); num.pop();
	int a = num.top(); num.pop();
	char c = op.top(); op.pop();
	if(c == '-') x = a - b;
	else if(c == '+') x = a + b;
	else if(c == '*') x = a * b;
	else x = a / b;
	num.push(x);
}
int main() {
	pr['-'] = pr['+'] = 1;
	pr['/'] = pr['*'] = 2;
	string str;
		cin >> str;
	for(int i = 0; i < str.size(); ++i) {
		if(isdigit(str[i])) {
			int x = 0, j = i;
			while(j < str.size() && isdigit(str[j])) x = x * 10 + str[j++] - '0';
			i = j - 1;
			num.push(x);
		} else if(str[i] == '(') {
			op.push('(');
		} else if(str[i] == ')') {
			while(op.top() != '(') eval();
			op.pop();
		} else {
			while(op.size() && pr[op.top()] >= pr[str[i]]) eval();
			op.push(str[i]);
		}
	}
	while(op.size()) eval();
	cout << num.top() << endl;
	return 0;
}
