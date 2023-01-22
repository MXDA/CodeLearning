#include<stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 1, y = 2;
    printf("max = %d\nx = %d y = %d\n", max(x++, y++), x, y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}