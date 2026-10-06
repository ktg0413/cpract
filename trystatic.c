#include <stdio.h>

static int next_id(void) {
    static int id = 0;
    return ++id;
}

int main(void) {
    int x = 9;
    const int *p = &x;
    x = 12;
    int first = next_id();
    int second = next_id();
    printf("%d %d %d\n", *p, first, second);
    return 0;
}