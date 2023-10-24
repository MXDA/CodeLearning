#include <iostream>
using namespace std;
const int N = 1e5 + 10;
int p[N];
int n, m;
int find(int x) {
    return p[x] != x ? p[x] = find(p[x]) : p[x];
}
int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) p[i] = i;
    while(m--) {
	char op[2];
	int a, b;
	    cin >> op >> a >> b;
	if(op[0] == 'M') p[find(a)] = find(b);
	else cout << (find(a) == find(b) ? "Yes" : "No") << endl;
    }
    return 0;
}
