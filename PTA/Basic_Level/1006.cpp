#include<bits/stdc++.h>
using namespace std;


int main() {
	int num;
		cin >> num;
	int a = num / 100;
	int b = (num / 10) % 10;
	int c = num % 10;
	while(a) {
		cout << "B";
		a--;	
	}
	while(b) {
		cout << "S";
		b--;
	}
	int i = 1;
	while(c) {
		cout << i;
		i++;
		c--;
	}
	return 0;
}
