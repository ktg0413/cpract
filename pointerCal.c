#include <stdio.h>

int main(void) {
    int a[] = {10, 20, 30, 40};
    int *p = a + 1;
    int *end = a + 4;
    printf("%d %td\n", p[1], end - p);
    return 0;
}