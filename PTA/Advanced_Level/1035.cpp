#include<bits/stdc++.h>
using namespace std;
vector<string> v1, v2;
string transform(string s) {
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '1') s[i] = '@';
        else if(s[i] == '0') s[i] = '%';
        else if(s[i] == 'l') s[i] = 'L';
        else if(s[i] == 'O') s[i] = 'o';
    }
    return s;
}
int main() {
    int t;  
        cin >> t;
    for(int i = 0; i < t; ++i) {
        string s1, s2;
            cin >> s1 >> s2;
        string s = transform(s2);
        if(s != s2) {
            v1.push_back(s1);
            v2.push_back(s);
        }
    } 
    if(t == 1 && v1.empty()) puts("There is 1 account and no account is modified");
    else if(v1.empty())  printf("There are %d accounts and no account is modified", t);
    else {
        cout << v1.size() << endl;
        for(int i = 0; i < v1.size(); ++i)
            cout << v1[i] << ' ' << v2[i] << endl;
    }
    return 0;
}