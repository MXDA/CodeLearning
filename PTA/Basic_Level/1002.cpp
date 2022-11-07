#include<string>
#include<iostream>
#include<vector>
using namespace std;

int main() {
	string str;
		cin >> str;
	int res = 0;
	vector<string> sv = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	//cout << sv[0] << endl;
	for (int i = 0; i < str.length(); ++i) {
		res += (str[i] - '0');
	}
	string num = to_string(res);
	for (int i = 0; i < num.length(); ++i) {
		if (i != 0) cout << " ";
		cout << sv[num[i] - '0'];
	}
	return 0;
}
