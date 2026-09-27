#include <stdio.h>

int main(void) {
    int a, b;

    if(scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    printf("%lld", (long long)a * b);
    return 0;
}