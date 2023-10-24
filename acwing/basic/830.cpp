#include <iostream>
using namespace std;
const int N = 1e5 + 10;
int st[N], tt = -1;

int main() {
	int m;
		cin >> m;
	while(m--) {
		int x;
			cin >> x;
		while(tt != -1 && st[tt] >= x) --tt;
		if(tt == -1) cout << -1 << ' ';
		else cout << st[tt] << ' ';
		st[++tt] = x;
	}
	return 0;
}
