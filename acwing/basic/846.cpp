#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 1e5 + 10;
const int M = 2 * N;
int h[N], e[M], ne[M], idx;
bool vis[N];
int ans = N, n;
void add(int a, int b) {
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int dfs(int u) {
    vis[u] = true;
    int sum = 1, res = 0;
    for(int i = h[u]; i != -1;  i = ne[i]) {
	int j = e[i];
	if(!vis[j]) {
	    int s = dfs(j);
	    res = max(res, s);
	    sum += s;
	}
    }
    res = max(res, n - sum);
    ans = min(ans, res);
    return sum;
}
int main() {
    cin >> n;
    memset(h, -1, sizeof h);
    for(int i = 0; i < n - 1; ++i) {
	int a, b;
	    cin >> a >> b;
	add(a, b); add(b, a);
    }    
    dfs(1);
    cout << ans << endl;
    return 0;
}
