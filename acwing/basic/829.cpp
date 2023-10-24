#include <iostream>
using namespace std;
const int N = 1e5 + 10;
int q[N], tt = -1, hh = 0;

int main() {
	int m;
		cin >> m;
	while(m--) {
		string op;
		int x;
			cin >> op;
		if(op == "push") {
			cin >> x;
			q[++tt] = x;
		} else if(op == "pop") {
			hh++;
		} else if(op == "empty") {
			cout << (hh <= tt ? "NO" : "YES") << endl;
		} else if(op == "query") {
			cout << q[hh] << endl;
		}
	}
	return 0;
}
