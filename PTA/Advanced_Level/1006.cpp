#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
        cin >> t;
    string num, op, cl;
    string num1, num2;
    string early, last;
    for(int i = 0; i < t; ++i) {
        cin >> num >> op >> cl;
        if(!i || op < early) {
            num1 = num;
            early = op;
        }
        if(!i || cl > last) {
            num2 = num;
            last = cl;
        }   
    }
    cout << num1 << ' ' << num2 << endl;
    return 0;
}