#include<bits/stdc++.h>
using namespace std;


int main() {
	int max = -1, min = 101, score;
	int n;
	string num, name, max_num, max_name, min_num, min_name;
		cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> name >> num >> score;
		if (score > max) {
			max_name = name;
			max_num = num;
			max = score;
		} 
		if (score < min) {
			min_name = name;
			min_num = num;
			min = score;
		}
	}
	cout << max_name << " " << max_num << endl;
	cout << min_name << " " << min_num << endl;
	return 0;
	
}
