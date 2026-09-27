#include <stdio.h>

int main(void) {
    int a;
    int b;

    if(scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    printf("%d %d", a / b, a % b);
}