#include <stdio.h>
#include <stdbool.h>

bool bounds(const int *a, size_t n, int *lo, int *hi) {

    if(n==0) {
        return false;
    } else {
        *lo = a[0];
        *hi = a[0];
        for(int i = 0; i < n; i++) {
            if(a[i] > *hi) {
                *hi = a[i];
            } else if(a[i] < *lo) {
                *lo = a[i];
            } else {
                continue;
            }
        } 
        return true;
    }
}

int main(void) {
    size_t n;
    int lo, hi;
    if(scanf("%zu", &n) != 1) {
        return 1;
    }

    int a[n];
    for(size_t i = 0; i < n; i ++){
        int b;
        scanf("%d", &b);
        a[i] = b;
    }

    if (!bounds(a, n, &lo, &hi)) {
        printf("ERROR");
        return 1;
    } else {
        printf("%d %d",lo, hi);
        return 0;
    }

}