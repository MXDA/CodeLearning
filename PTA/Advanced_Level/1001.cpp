#include<bits/stdc++.h>
using namespace std;


int main() {
	int a, b;
		cin >> a >> b;
	string str = to_string(a + b);
	string res;

	for(int i = str.size() - 1, j = 0; i >= 0; --i) {
		res = str[i] + res;
		if(++j % 3 == 0 && i - 1 >= 0 && str[i - 1] != '-')
			res = ',' + res;
	}
	cout << res << endl;
}
