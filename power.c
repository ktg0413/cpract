#include <stdio.h>

int main(void) {
    int a, b;
    long result;

    if(scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    if(b == 0) {
        result = 1;
    } else {
        result = 1;
        for(int i = 0; i < b; i++) {
            result *= a;
        }
    }

    printf("%ld", result);
    return 0;
}