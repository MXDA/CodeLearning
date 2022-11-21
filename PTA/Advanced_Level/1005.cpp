#include<bits/stdc++.h>
using namespace std;
string s[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {
    string str;
        cin >> str;
    int sum = 0;
    for(int i = 0; i < str.size(); ++i) sum += str[i] - '0';
    string res = to_string(sum);
    for(int i = 0; i < res.size(); ++i) {
        cout << s[res[i] - '0'];
        if(i !=  res.size() - 1) putchar(' ');
    }
    return 0;
}
