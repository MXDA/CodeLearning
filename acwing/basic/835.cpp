#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int trie[N][26], cnt[N], idx;
char str[N];
void insert(char str[]) {
	int p = 0;
	for(int i = 0; str[i]; ++i) {
		int u = str[i] - 'a';
		if(!trie[p][u]) trie[p][u] = ++idx;
		p = trie[p][u];
	}
	cnt[p]++;
}

int query(char str[]) {
	int p = 0;
	for(int i = 0; str[i]; ++i) {
		int u = str[i] - 'a';
		if(!trie[p][u]) return 0;
		p = trie[p][u];
	}
	return cnt[p];
}
int main() {
	int m;
		cin >> m;
	while(m--) {
		char op[2];
			cin >> op >> str;
		if(op[0] == 'I') {
			insert(str);	
		} else {
			cout << query(str) << endl;
		}
	}
	return 0;
}
