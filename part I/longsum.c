#include <stdio.h>

int main(void) {
    long a;
    long b;

    if(scanf("%ld %ld", &a, &b) != 2) {
        return 1;
    }

    printf("%ld + %ld = %ld", a, b, a+b);

    return 0;
}