#include<stdio.h>

int main() {
    int x = 1;
    double y = 1;
    if((!!(sizeof((typeof(x) *)1 == (typeof(y) *)1)))==1)
        printf("==\n");
    else
        printf("!=\n");
    printf("#%d\n", x == y);
}