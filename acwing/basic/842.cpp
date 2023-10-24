#include <iostream>
using namespace std;
const int N = 10;
int a[N], n;
void dfs(int u, int st) {
    if(u == n) {
	for(int i = 0; i < n; ++i)
	    cout << a[i] << ' ';
	puts("");
	return ;
    }
    for(int i = 1; i <= n; ++i) {
	if(!((st >> i) & 1)) {
	    a[u] = i;
	    dfs(u + 1, st | (1 << i));
	}
    }
}
int main() {
    cin >> n;
    dfs(0, 0);
    return 0;
}
