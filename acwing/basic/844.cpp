#include <exception>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int N = 110;
#define x first
#define y second
typedef pair<int, int> PII;

PII q[N * N];
int d[N][N], g[N][N];
int n, m;
int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
int bfs() {
    memset(d, -1, sizeof d);
    d[0][0] = 0;
    int hh = 0, tt = 0;
    q[0] = {0, 0};
    while(hh <= tt) {
	PII top = q[hh++];
	for(int i = 0; i < 4; ++i) {
	    int x = dx[i] + top.x, y = dy[i] + top.y;
	    if(x >= 0 && x < n && y >= 0 && y < m && d[x][y] == -1 && g[x][y] == 0) {
		d[x][y] = d[top.x][top.y] + 1;
		q[++tt] = {x, y};
	    }
	}
    }
    return d[n - 1][m - 1];
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
	for(int j = 0; j < m; ++j)
	    cin >> g[i][j];
    cout << bfs() << endl;
    return 0;
}
