#include <stdio.h>

int main(void) {
    int a;
    int count = 0;

    while(scanf("%d", &a) == 1) {
        if(a == 0) {
            break;
        } else {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}