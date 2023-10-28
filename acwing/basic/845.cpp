#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;


string st = "", ed = "12345678x";
queue<string> q;
unordered_map<string, int> d;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

int bfs() {
    d[st] = 0;
    q.push(st);
    while(q.size()) {
	string top = q.front(); q.pop();
	if(top == ed) return d[top];
	int dis = d[top];
	int k = top.find('x');
	int x = k / 3, y = k % 3;
	for(int i = 0;  i < 4; ++i) {
	    int a = x + dx[i], b = y + dy[i];
	    if(a >= 0 && a < 3 && b >= 0 && b < 3) {
		swap(top[a * 3 + b], top[k]);
		if(!d.count(top)) d[top] = dis + 1, q.push(top);
		swap(top[k], top[a * 3 + b]);
	    }
	}
    }

    return -1;
}

int main() {
    char c;
    for(int i = 0; i < 9; ++i) {
	cin >> c;
	st += c;
    }
    cout << bfs() << endl;
    return 0;
}
