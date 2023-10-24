#include <iostream>
using namespace std;
const int N = 1010;
int a[N][N], n, m, k;

int main() {
	cin >> n >> m >> k;
	for(int i = 1; i <= n; ++i)
		for(int j = 1; j <= m; ++j) {
			int x;
				cin >> x;
			a[i][j] += x;
			a[i][j + 1] -= x;
			a[i + 1][j] -= x;
			a[i + 1][j + 1] += x;
		}
	while(k--) {
		int i1, j1, i2, j2, x;
			cin >> i1 >> j1 >> i2 >> j2 >> x;
		a[i1][j1] += x;
		a[i2 + 1][j1] -= x;
		a[i1][j2 + 1] -= x;
		a[i2 + 1][j2 + 1] += x;
	}
	for(int i = 1; i <= n; ++i)
		for(int j = 1; j <= m; ++j)
			a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= m; ++j) cout << a[i][j] << ' ';
		puts("");
	}
	return 0;
}
