#include <stdio.h>

int max(const int a[], size_t n) {
    int max = a[0];
    for(size_t i = 0; i < n; i++){
        if(a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int min(const int a[], size_t n) {
    int min = a[0];
    for(size_t i = 0; i < n; i++){
        if(a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int main(void) {
    int a;
    if(scanf("%d", &a) != 1) {
        return 1;
    }

    int list[a];

    for(int i = 0; i < a; i++){
        int b;
        scanf("%d", &b);
        list[i] = b;
    }

    printf("%d %d\n", max(list,a), min(list,a));
    return 0;
}