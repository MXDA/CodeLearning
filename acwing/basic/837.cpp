#include <iostream>
#include <string>
using namespace std;
const int N = 1e5 + 10;

int p[N], cnt[N];
int find(int x) {
    return p[x] != x ? p[x] = find(p[x]) : p[x];
}
int main() {
    int n, m;
	cin >> n >> m;
    for(int i = 1; i <= n; ++i) p[i] = i, cnt[i] = 1;
    while (m--) {
	string op;
	int a, b;
	    cin >> op;
	if (op == "C") {
	    cin >> a >> b;
	    a = find(a), b = find(b);
	    if(a != b) {
		p[a] = b;
		cnt[b] += cnt[a];
	    }
	} else if(op == "Q1") {
	    cin >> a >> b;
	    cout << (find(a) == find(b) ? "Yes" : "No") << endl;
	} else {
	    cin >> a;
	    cout << cnt[find(a)] << endl;
	}
    }
    return 0;
}
