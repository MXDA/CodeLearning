#include<bits/stdc++.h>
using namespace std;
unordered_map<string, int> mp;

int main() {
    string str;
    getline(cin, str);
    //cout << str << endl;
    for(int i = 0; i < str.size(); ++i) {
        if(!isalnum(str[i])) continue;
        int j = i;
        string word;
        while(j < str.size() && isalnum(str[j])) word += tolower(str[j++]);
        //cout << word << endl;
        i = j;
        mp[word]++;
    }
    int cnt = -1;
    string res;
    for(auto it : mp) {
        if(cnt < it.second) {
            cnt = it.second;
            res = it.first;
        }
        //cout << it.first << ' ' << it.second << endl;
    }
    cout << res << ' ' << cnt << endl;
    return 0;
}