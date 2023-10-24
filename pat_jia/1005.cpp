#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

string word[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {
    string n;
	cin >> n;
    int s = 0;
    for(int i = 0; i < n.size(); ++i) s += n[i] - '0';
    string str = to_string(s);
    cout << word[str[0] - '0'];
    for(int i = 1; i < str.size(); ++i) cout << " " << word[str[i] - '0'];
    return 0;
}
