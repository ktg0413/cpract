#include <stdio.h>

int main(void) {
    int a;
    int sum = 0;

    if(scanf("%d", &a) != 1) {
        return 1;
    }

    for (int i = 1; i <= a; i++) {
        sum += i;
    }

    printf("%d", sum);
    return 0;
}