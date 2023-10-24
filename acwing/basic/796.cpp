#include <iostream>
#include <iterator>
using namespace std;

const int N = 1010;
int a[N][N], n, m, x;
int main() {
	cin >> n >> m >> x;
	for(int i = 1; i <= n; ++i)
		for(int j = 1; j <= m; ++j) {
			cin >> a[i][j];
			a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
		}
	while(x--) {
		int i1, j1, i2, j2;
			cin >> i1 >> j1 >> i2 >> j2;
		cout << a[i2][j2] - a[i1 - 1][j2] - a[i2][j1 - 1] + a[i1 - 1][j1 - 1] << endl;
	}
	return 0;
}
