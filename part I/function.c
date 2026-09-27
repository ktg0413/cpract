#include <stdio.h>

int square(int x) {return x * x;}

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a % b);
}

int main(void) {
    printf("%d %d\n", square(7), gcd(18, 12));
    return 0;
}