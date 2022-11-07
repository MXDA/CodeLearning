#include<bits/stdc++.h>
using namespace std;

int func(int num) {
	if(num % 2 == 0) {
		num /= 2;
	} else {
		num = (num * 3+ 1) / 2;
	}
	return num;
}
int main() {
	int num = 0;
	int i = 0;
		cin >> num;
	for(; num != 1; ++i) {
		num = func(num);
	}
	cout << i << endl;
}
