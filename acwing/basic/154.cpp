#include <iostream>
using namespace std;
const int N = 1e6 + 10;
int a[N];
int q[N], tt = -1, hh = 0;
int n, k;

int main() {
	cin >> n >> k;
	for(int i = 0; i < n; ++i) cin >> a[i];
	for(int i = 0; i < n; ++i) {
		if(hh <= tt && i - k + 1 > q[hh]) hh++;
		while(hh <= tt && a[q[tt]] >= a[i]) --tt;
		q[++tt] = i;
		if(i >= k - 1) cout << a[q[hh]] << ' ';
	}
	puts("");
	hh = 0, tt = -1;
	for(int i = 0; i < n; ++i) {
		if(hh <= tt && i - k + 1 > q[hh]) hh++;
		while(hh <= tt && a[q[tt]] <= a[i]) --tt;
		q[++tt] = i;
		if(i >= k - 1) cout << a[q[hh]] << ' ';
	}
	return 0;
}
