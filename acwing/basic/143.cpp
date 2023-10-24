#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5 + 10;
const int M = 31 * N;

int a[N], n;
int trie[M][2], idx;
	
void insert(int x) {
	int p = 0;
	for(int i = 30; i >= 0; --i) {
		int u = x >> i & 1;
		if(!trie[p][u]) trie[p][u] = ++idx;
		p = trie[p][u];
	}
}

int query(int x) {
	int res = 0, p = 0;
	for(int i = 30; i >= 0; --i) {
		int u = x >> i & 1;
		if(trie[p][!u]) p = trie[p][!u], res = (res << 1) + !u;
		else p = trie[p][u], res = (res << 1) + u;
	}
	return res;
}
int main() {
	cin >> n;
	int res = 0;
	for(int i = 0; i < n; ++i) cin >> a[i];
	for(int i = 0; i < n; ++i) {
		insert(a[i]);
		res = max(res, a[i] ^ query(a[i]));
	}
	cout << res << endl;
	return 0;
}
