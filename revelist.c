#include <stdio.h>

void rev(int a[], int n) {
    for(int i = 0; i < (n/2); i++) {
        int last = n - 1 - i;
        int temp = a[last];
        a[last] = a[i];
        a[i] = temp;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main(void) {
    int n;

    printf("How many numbers are you going to input?: \n");
    if(scanf("%d", &n) != 1) {
        return 1;
    }
    if(n == 0) {
        printf("EMPTY\n");
        return 0;
    }

    int list[n];
    printf("Input numbers: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    rev(list, n);

}