# include <stdio.h>

int main(void) {
    int n;
    double p;

    if(scanf("%d %lf", &n, &p) != 2){
        return 1;
    }

    printf("%.2lf", n * p);
    return 0;
}