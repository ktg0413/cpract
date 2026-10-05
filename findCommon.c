#include <stdio.h>

int where(int *a, size_t n, int t) {
    int count = -1;
    for(size_t i = 0; i < n; i++) {
        count++;
        if(a[i] == t) {
            break;
        }
    }
    return count;
}

int main(void){
    size_t n;
    if(scanf("%zu", &n) != 1) {
        return 1;
    }
    int a[n];
    for(size_t i = 0; i < n; i++){
        int b;
        scanf("%d", &b);
        a[i] = b;
    }
    printf("What number are you looking for: ");
    int t;
    if(scanf("%d", &t) != 1) {
        return 1;
    }   
    printf("%d", where(a, n, t));

}