#include <stdio.h>
// find value which makes the remainder zero
int gcd(int x, int y) {
    while(y!=0){
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main(void) {
    int a, b, gc;
    if(scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    if(a == 0 || b == 0) {
        gc = 0;
    } else {
        gc = gcd(a, b);
    }
    printf("%d", gc);
    return 0;
}
