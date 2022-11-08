#include<iostream>
#include<map>
using namespace std;

int main() {
    string s;
    map<char, int> mp;
        cin >> s;
    for(int i = 0; i < s.size(); ++i)
        mp[s[i]]++;
    for(map<char, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << ":" << it->second << endl;
    }
    return 0;
}
