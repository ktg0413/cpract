#include <stdio.h>

void swap(int *a, int *b) {
    int t =*a;
    *a = *b;
    *b = t;
}

int main(void) {
    int a = 3, b = 8;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}