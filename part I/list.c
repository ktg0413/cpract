#include <stdio.h>

int sum_array(const int a[], size_t n) {
    int sum = 0;
    for(size_t i = 0; i < n; ++i) sum += a[i];
    return sum;
}

int main(void) {
    int a[] = {4,1,7};
    size_t n = sizeof a / sizeof a[0];
    printf("%d\n", sum_array(a , n));
    return 0;
}