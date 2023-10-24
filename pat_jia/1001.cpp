#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
	cin >> a >> b;
    string str = to_string(a + b);
    int cnt = 0;
    string res = "";
    for(int i = str.size() - 1; i >= 0; --i) {
	if(cnt % 3 == 0 && cnt != 0 && isdigit(str[i])) res = "," + res;
	if(isdigit(str[i])) cnt++;
	res = str[i] + res;
    }
    cout << res << endl;
    return 0;
}
