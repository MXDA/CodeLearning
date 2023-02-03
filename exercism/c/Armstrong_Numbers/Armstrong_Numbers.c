#include "armstrong_numbers.h"
int power(int a, int b) {
    int res = 1;
    for(int i = 0; i < b; ++i)
        res *= a;
    return res;
}
bool is_armstrong_number(int candidate) {
    int b = 0, tmp = candidate;
    int res = 0;
    while(tmp) {
        b += 1;
        tmp /= 10;
    }
    tmp = candidate;
    while(tmp) {
        int num = tmp % 10;
        res += power(num, b);
        tmp /= 10;
    }
    return res == candidate;
}