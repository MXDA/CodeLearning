#include <iostream>
using namespace std;

int main() {
	int n;
		cin >> n;
		while(n--) {
			int x, cnt = 0;
			cin >> x;
			for(int i = x; i; i -= i & -i) cnt++;
			cout << cnt << ' ';
		}
	return 0;
}
