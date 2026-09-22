#include <stdio.h>

int main(void) {
    int a=7, b=2;
    
    printf("%d %.2f %d\n", a / b, (double)a / b, a % b);

    return 0;
    
}