#include <iostream>
#include <string>
using namespace std;
const int N = 1010;
string name[N], pwd[N];
string na, pd;

string func(string pd) {
    for(int i = 0; i < pd.size(); ++i) {
	if(pd[i] == '1') pd[i] ='@';
        else if(pd[i] == '0') pd[i] = '%';
        else if(pd[i] == 'l') pd[i] = 'L';
        else if(pd[i] == 'O') pd[i] = 'o';
    }
    return pd;
}
int main() {
    int cnt = 0, n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
	    cin >> na >> pd;
	    string tmp = func(pd);
	    if(tmp != pd) {
		name[cnt] = na;
		pwd[cnt++] = tmp;
	    }
	}

	if(!cnt) {
	    if(n == 1) cout << "There is 1 account and no account is modified" << endl;
	    else cout << "There are " << n << " accounts and no account is modified" << endl;
	    return 0;
	}

	cout << cnt << endl;
	for(int i = 0; i < cnt; ++i)
	    cout << name[i] << ' ' << pwd[i] << endl;
    return 0;
}
