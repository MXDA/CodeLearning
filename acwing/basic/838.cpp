#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5 + 10;
int h[N], n, m, num;

void down(int u) {
    int t = u;
    if(u * 2 <= num && h[t] > h[u * 2]) t = u * 2;
    if(u * 2 + 1 <= num && h[t] > h[u * 2 + 1]) t = u * 2 + 1;
    if(t != u) {
	swap(h[t], h[u]);
	down(t);
    }
}
int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) cin >> h[i];
    num = n;
    for(int i = n / 2; i >= 1; --i) down(i);
    while(m--) {
	cout << h[1] << ' ';
	h[1] = h[num--];
	down(1);
    }
    return 0;
}
