#include<bits/stdc++.h>
using namespace std;
string week[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
int main() {
    string a, b, c, d;
        cin >> a >> b >> c >> d;
    int k = 0;
    while(true) {
        if(a[k] == b[k] && a[k] >= 'A' && a[k] <= 'G') break;
        ++k; 
    } 
    cout << week[a[k] - 'A'] << ' ';
    k++;
    while(true) {
        if(a[k] == b[k] && (a[k] >= '0' && a[k] <= '9' || a[k] >= 'A' && a[k] <= 'N')) break;
        ++k;
    }
    printf("%02d:", a[k] <= '9' ? a[k] - '0' : a[k] - 'A' + 10);
    for(int i = 0; ; i++) {
        if(c[i] == d[i] && isalpha(c[i])) {
            printf("%02d", i);
            break;
        }

    }
    return 0;
}