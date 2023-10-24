#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
	cin >> n;
    string num, st, ed;
    string op_t, op, close_t, close;

    for(int i = 0; i < n; ++i) {
	cin >> num >> st >> ed;
	if(!i || op > st) {
	    op = st;
	    op_t = num;
	}
	if(!i || close < ed) {
	    close = ed;
	    close_t = num;
	}
    }
    cout << op_t << ' ' << close_t << endl;
    return 0;
}
