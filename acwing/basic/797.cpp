#include <iostream>

using namespace std;
const int N = 1e5 + 10;
int a[N], n, m, x;
int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) {
		cin >> x;
		a[i] += x, a[i + 1] -= x;
	}
	while(m--) {
		int l, r;
			cin >> l >> r >> x;
		a[l] += x, a[r + 1] -= x;
	}
	for(int i = 1; i <= n; ++i) 
		a[i] += a[i - 1], cout << a[i] << ' ';
	return 0;
}
