# include <stdio.h>

int main(void) {
    int count = 3;
    double price = 2.5;
    size_t n = 4;
    printf("%d %.2f %zu\n", count, price * count, n);
    return 0;
}