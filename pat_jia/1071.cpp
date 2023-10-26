#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <unordered_map>
using namespace std;

unordered_map<string, int> mp;

int main() {
    string str;
    getline(cin, str);

    for(int i = 0; i < str.size(); ++i) {
	int j = i;
	if(isalnum(str[j])) {
	    string word = "";
	    while(j < str.size() && isalnum(str[j])) word += tolower(str[j++]);
	    mp[word]++;
	}
	i = j;
    }
    int cnt = INT_MIN;
    string word;
    for(auto it : mp) {
	if(cnt < it.second || it.second == cnt && word > it.first) word = it.first, cnt = it.second;
    }
    cout << word << ' ' << cnt << endl;
    return 0;
}
