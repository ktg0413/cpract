#include <stdio.h>

void rev(int a[], int n) {
    int dudel[n];
    int inx = 1;

    int before = a[0];

    dudel[0] = before;
    for(int i = 1; i < n; i++) {
        if(before != a[i]) {
            dudel[inx] = a[i];
            inx++;
        }
        before = a[i];
    }

    for(int i = 0; i < inx; i++) {
        printf("%d ", dudel[i]);
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