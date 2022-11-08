#include<iostream>
#include<vector>
using namespace std;
bool is_prime(int n);

int main() {
    int n, m, num = 2;
    int cnt = 0;
    vector<int> primes;
        cin >> m >> n;
    while(cnt < n) {
        if(is_prime(num)) {
            cnt++;
            if(cnt >= m) primes.push_back(num);
        }
        num++;
    }
    cnt = 0;
    for(int i = 0; i < primes.size(); ++i) {
        cnt++;
        if(cnt % 10 != 1) cout << " ";
        cout << primes[i];
        if(cnt % 10 == 0) cout << endl;
    }    
    return 0;
}

bool is_prime(int n) {
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}