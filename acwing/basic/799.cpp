#include <algorithm>
#include <iostream>
using namespace std;
const int N = 1e5 + 10;
int a[N], s[N], n, res;
int main() {
	cin >> n;
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	for(int i = 0, j = 0; j < n; ++j) {
		s[a[j]]++;
		while(s[a[j]] > 1) {
			s[a[i++]]--;
		}
		res = max(res, j - i + 1); 
	}
	cout << res << endl;
	return 0;
}
