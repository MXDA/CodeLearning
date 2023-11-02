#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 110;
int n, m;
int h[N], e[N], ne[N], idx;
int cnt[N], depth;
void add(int a, int b) {
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}
void dfs(int u, int d) {
    if(h[u] == -1) {
	cnt[d]++;
	depth = max(depth, d);
	return ;
    }
    for(int i = h[u]; ~i; i = ne[i]) {
	dfs(e[i], d + 1);
    }
}
int main() {
    cin >> n >> m;
    memset(h, -1, sizeof h);
    for(int i = 0; i < m; ++i) {
	int id, k;
	    cin >> id >> k;
	    while(k--) {
		int son;
		    cin >> son;
		add(id, son);
	    }
    }
    dfs(1, 0);
    cout << cnt[0];
    for(int i = 1; i <= depth; ++i) cout << ' ' << cnt[i];
    return 0;
}
