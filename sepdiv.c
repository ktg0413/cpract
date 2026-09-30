#include <stdio.h>
#include <stdbool.h>

bool divmod(int a, int b, int *q, int *r) {
    if( b == 0) {
        return false;
    } else {
        *q = a / b;
        *r = a % b;
        return true;
    }
}

int main(void) {
    int a, b, q, r;
    if(scanf("%d %d", &a, &b) !=2 ) {
        return 1;
    }
    if ( !divmod(a, b, &q, &r)) {
        printf("ERROR");
    } else {
        printf("%d %d", q, r);
    }

}