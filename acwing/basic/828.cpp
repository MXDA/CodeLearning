#include <iostream>
#include <string>
using namespace std;
const int N = 1e5 + 10;
int st[N], tt = -1;
int m, x;
int main() {
	cin >> m;
	while(m--) {
		string op;
			cin >> op;
			if(op == "push") {
				cin >> x;
				st[++tt] = x;
			} else if(op == "pop") {
				--tt;
			} else if(op == "query") {
				cout << st[tt] << endl;
			} else {
				cout << (tt == -1 ? "YES" : "NO") << endl;
			}
	}
	return 0;
}
