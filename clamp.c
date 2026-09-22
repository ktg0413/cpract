#include <stdio.h>

int clamp(int x, int lo, int hi) {
    if(lo > hi){
        clamp(x, hi, lo);
    } else if(x > hi) {
        return hi;
    } else if(x < lo) {
        return lo;
    }else {
        return x;
    }
}

int main(void){
    printf("%d\n", clamp(15, 0, 10));
    printf("%d\n", clamp(5, 0, 10));
    printf("%d\n", clamp(15, 11, 10));
}