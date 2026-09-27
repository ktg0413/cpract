#include <stdio.h>

int main(void) {
    int sum = 0;
    for (int i = 1; i <= 5; ++i) {
        if (i %2 == 0) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}