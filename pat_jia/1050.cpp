#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
unordered_set<char> has;

int main(){
    string str, s;
    getline(cin, str);
    getline(cin, s);
    for(int i = 0; i < s.size(); ++i) has.insert(s[i]);
    for(int i = 0; i < str.size(); ++i)
	if(!has.count(str[i])) putchar(str[i]);
    return 0;
}
