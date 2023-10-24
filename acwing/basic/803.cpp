#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef pair<int, int> PII;
#define x first
#define y second
int n, l, r;
void merge(vector<PII>& segs) {
	vector<PII> res;
	sort(segs.begin(), segs.end());
	int st = -2e9, ed = -2e9;
	for(int i = 0; i < segs.size(); ++i) {
		if(segs[i].x > ed) {
			if(st != -2e9) res.push_back({st, ed});
			st = segs[i].x, ed = segs[i].y;
		} else {
			ed = max(ed, segs[i].y);
		}
	}
	if(ed != -2e9) res.push_back({st, ed});
	segs = res;
}
int main() {
	cin >> n;
	vector<PII> segs;
	for(int i = 0; i < n; ++i) {
		cin >> l >> r;
		segs.push_back({l, r});
	}
	merge(segs);
	cout << segs.size() << endl;
	return 0;
}
