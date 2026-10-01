#include <stdio.h>

void sum(int *a, int b, int *result) {
    for(size_t i = 0; i < b; i++) {
        *result += a[i];
    }
}

int main(void) {
    int result = 0;

    // take size of list
    size_t n;
    if(scanf("%zu",&n) != 1) {
        return 1;
    }
    // make list
    // if n = 5 
    // => list[] = {1,2,3,4,5}
    int list[n];
    for(size_t i = 0; i < n; i++) {
        list[i] = i + 1;
    }
    
    // take range
    int l, r;
    if(scanf("%d %d",&l, &r) != 2) {
        return 1;
    }

    // return result
    if(l > r) {
        return 1;
    } else if(l == r) {
        printf("%d", 0);
    } else {
        sum(list + l, r - l, &result);
        printf("%d", result);
    }
    return 0;
}